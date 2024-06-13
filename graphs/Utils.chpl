module Utils {
  use Sort;
  use Search;
  use BlockDist;
  use BitOps;
  use List;
  use CopyAggregation;

  import Reflection.canResolveMethod;
  record contrivedComparator {
    const dc = new DefaultComparator();
    proc keyPart(a, i: int) {
      if canResolveMethod(dc, "keyPart", a, 0) {
        return dc.keyPart(a, i);
      } else if isTuple(a) {
        return tupleKeyPart(a, i);
      } else {
        compilerError("No keyPart method for eltType ", a.type:string);
      }
    }
    proc tupleKeyPart(x: _tuple, i:int) {
      proc makePart(y): uint(64) {
        var part: uint(64);
        // get the part, ignore the section
        const p = dc.keyPart(y, 0)(1);
        // assuming result of keyPart is int or uint <= 64 bits
        part = p:uint(64); 
        // If the number is signed, invert the top bit, so that
        // the negative numbers sort below the positive numbers
        if isInt(p) {
          const one:uint(64) = 1;
          part = part ^ (one << 63);
        }
        return part;
      }
      var part: uint(64);
      if isTuple(x[0]) && (x.size == 2) {
        for param j in 0..<x[0].size {
          if i == j {
            part = makePart(x[0][j]);
          }
        }
        if i == x[0].size {
          part = makePart(x[1]);
        }
        if i > x[0].size {
          return (-1, 0:uint(64));
        } else {
          return (0, part);
        }
      } else {
        for param j in 0..<x.size {
          if i == j {
            part = makePart(x[j]);
          }
        }
        if i >= x.size {
          return (-1, 0:uint(64));
        } else {
          return (0, part);
        }
      }
    }
  }
  const myDefaultComparator = new contrivedComparator();

  // Pulled from Arkouda, used within radix sort for merging arrays
  config param RSLSD_bitsPerDigit = 16;
  private param bitsPerDigit = RSLSD_bitsPerDigit;

  // Pulled from Arkouda, these need to be const for comms/performance reasons
  private param numBuckets = 1 << bitsPerDigit;
  private param maskDigit = numBuckets-1;

  /* Pulled from Arkouda, gets the maximum bit width of the array and if there 
  are any negative numbers */
  inline proc getBitWidth(const ref a: [?aD] int): (int, bool) {
    var aMin = min reduce a;
    var aMax = max reduce a;
    var wPos = if aMax >= 0 then numBits(int) - clz(aMax) else 0;
    var wNeg = if aMin < 0 then numBits(int) - clz((-aMin)-1) else 0;
    const signBit = if aMin < 0 then 1 else 0;
    const bitWidth = max(wPos, wNeg) + signBit;
    const negs = aMin < 0;

    return (bitWidth, negs);
  }

  /* Pulled from Arkouda, for two arrays returns array with bit width and 
  negative information */
  proc getNumDigitsNumericArrays(const ref arr1, const ref arr2) {
    var bitWidths: [0..<2] int;
    var negs: [0..<2] bool;
    var totalDigits: int;

    (bitWidths[0], negs[0]) = getBitWidth(arr1);
    totalDigits += (bitWidths[0] + (bitsPerDigit-1)) / bitsPerDigit;

    (bitWidths[1], negs[1]) = getBitWidth(arr2);
    totalDigits += (bitWidths[1] + (bitsPerDigit-1)) / bitsPerDigit;

    return (totalDigits, bitWidths, negs);
  }

  /* Pulled from Arkouda, get the digits for the current rshift. Signbit needs 
  to be inverted for negative values */
  inline proc getDigit(key: int, rshift: int, last: bool, negs: bool): int {
    const invertSignBit = last && negs;
    const xor = (invertSignBit:uint << (RSLSD_bitsPerDigit-1));
    const keyu = key:uint;

    return (((keyu >> rshift) & (maskDigit:uint)) ^ xor):int;
  }

  /* Pulled from Arkouda, return an array of all values from array a 
  whose index corresponds to a true value in array truth */
  proc boolIndexer(const ref a: [?aD] ?t, const ref truth: [aD] bool) {
    var iv: [truth.domain] int = (+ scan truth);
    var pop = iv[iv.size-1];
    var ret = blockDist.createArray({0..<pop}, t);

    forall (i, eai) in zip(a.domain, a) with (var agg = new DstAggregator(t)) do 
      if (truth[i]) then agg.copy(ret[iv[i]-1], eai);
    
    return ret;
  }

  proc symmetrizeEdgeList(const ref src, const ref dst) {
    var m = src.size;

    var symmSrc = blockDist.createArray({0..<2*m}, int);
    var symmDst = blockDist.createArray({0..<2*m}, int);

    symmSrc[0..<m] = src; symmSrc[m..<2*m] = dst; // TODO: Needs aggregator?
    symmDst[0..<m] = dst; symmDst[m..<2*m] = src; // TODO: Needs aggregator?

    return (symmSrc, symmDst);
  }

  /* Pulled from Arkouda, removes duplicate keys from sorted arrays */
  proc uniqueFromSorted(const ref sorted: [?aD] ?t, param needCounts = true) {
    var truth = blockDist.createArray(aD, bool);
    truth[0] = true;
    [(t,s,i) in zip(truth,sorted,aD)] if i>aD.low { t=(sorted[i-1] != s); }
    var allUnique: int = + reduce truth;

    if allUnique == aD.size then return sorted;

    var iv: [truth.domain] int = (+ scan truth);
    var pop = iv[iv.size - 1];

    var segs = blockDist.createArray({0..<pop}, int);
    var ukeys = blockDist.createArray({0..<pop}, t);

    forall i in truth.domain with (var agg = new DstAggregator(int)){
      if truth[i] == true {
        var idx = i; 
        agg.copy(segs[iv[i]-1], idx);
      }
    }

    forall (_,uk,seg) in zip(segs.domain, ukeys, segs) 
      with (var agg = new SrcAggregator(t)) do agg.copy(uk, sorted[seg]);

    return ukeys;
  }

  proc sortEdgeList(in src, in dst) {
    var (totalDigits,bitWidths,negs) = getNumDigitsNumericArrays(src, dst);
    var m = src.size;

    /* Pulled from Arkouda to merge two arrays into one for radix sort */
    proc mergeNumericArrays(param numDigits,size,totalDigits,bitWidths,negs) {
      var merged = blockDist.createArray(
        {0..<size}, 
        numDigits*uint(bitsPerDigit)
      );
      var curDigit = numDigits - totalDigits;

      var nBits = bitWidths[0];
      var neg = negs[0];
      const r = 0..#nBits by bitsPerDigit;
      for rshift in r {
        const myDigit = (nBits-1 - rshift) / bitsPerDigit;
        const last = myDigit == 0;
        forall (m, a) in zip(merged, src) {
          m[curDigit+myDigit]=getDigit(a,rshift,last,neg):uint(bitsPerDigit);
        }
      }
      curDigit += r.size;
      nBits = bitWidths[1];
      neg = negs[1];
      for rshift in r {
        const myDigit = (nBits-1 - rshift) / bitsPerDigit;
        const last = myDigit == 0;
        forall (m, a) in zip(merged, dst) {
          m[curDigit+myDigit]=getDigit(a,rshift,last,neg):uint(bitsPerDigit);
        }
      }
      curDigit += r.size;

      return merged;
    }

    /* Pulled from Arkouda, runs the merge function and then the sort function */
    proc mergedArgsort(param numDigits) {
      var merged = mergeNumericArrays(
        numDigits, 
        m, 
        totalDigits, 
        bitWidths, 
        negs
      );

      var AI = blockDist.createArray(merged.domain, (merged.eltType,int));
      var iv = blockDist.createArray(merged.domain, int);

      AI = [(a, i) in zip(merged, merged.domain)] (a, i);
      Sort.TwoArrayDistributedRadixSort.twoArrayDistributedRadixSort(
        AI, comparator=myDefaultComparator
      );
      iv = [(_, i) in AI] i;

      return iv;
    }

    var iv = blockDist.createArray({0..<m}, int);
    if totalDigits <=  4 { iv = mergedArgsort( 4); }
    else if totalDigits <=  8 { iv = mergedArgsort( 8); }
    else if totalDigits <= 16 { iv = mergedArgsort(16); }

    var sortedSrc = src[iv]; var sortedDst = dst[iv];

    return (sortedSrc, sortedDst);
  }

  proc removeSelfLoops(const ref src, const ref dst) {
    var loops = src != dst;
    var noLoopsSrc = boolIndexer(src, loops);
    var noLoopsDst = boolIndexer(dst, loops);

    return (noLoopsSrc, noLoopsDst);
  }

  proc removeMultipleEdges(const ref src: [?sD] int, const ref dst) {
    var edgesAsTuples = blockDist.createArray(
      sD, (int,int)
    );

    forall (e, i) in zip(edgesAsTuples, edgesAsTuples.domain) do
      e = (src[i], dst[i]);

    var uniqueEdges = uniqueFromSorted(edgesAsTuples);
    var eD = uniqueEdges.domain;
    var noDupsSrc = blockDist.createArray(eD,int);
    var noDupsDst = blockDist.createArray(eD,int);

    forall (e,u,v) in zip(uniqueEdges,noDupsSrc,noDupsDst) {
      u = e[0];
      v = e[1];
    }

    return (noDupsSrc, noDupsDst);
  }

  proc oneUpper(const ref src: [?eD] int, const ref dst) {
    var allVertices = blockDist.createArray({0..<eD.size*2}, int);
    allVertices[0..<eD.size] = src;
    allVertices[eD.size..<eD.size*2] = dst;
    Sort.TwoArrayDistributedRadixSort.twoArrayDistributedRadixSort(
      allVertices
    );
    var uniqueVertices = uniqueFromSorted(allVertices);
    var oneUppedSrc = blockDist.createArray(eD, int);
    var oneUppedDst = blockDist.createArray(eD, int);

    forall i in eD {
      oneUppedSrc[i] = Search.binarySearch(
        uniqueVertices,
        src[i]
      )[1]; // TODO: Needs aggregator? Distributed binary search?
      oneUppedDst[i] = Search.binarySearch(
        uniqueVertices,
        dst[i]
      )[1]; // TODO: Needs aggregator? Distributed binary search?
    }

    return (oneUppedSrc, oneUppedDst, uniqueVertices);
  }
}