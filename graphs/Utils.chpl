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
  inline proc getBitWidth(a: [?aD] int): (int, bool) {
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
  proc getNumDigitsNumericArrays(arr1, arr2) {
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
  proc boolIndexer(a: [?aD] ?t, truth: [aD] bool) {
    var iv: [truth.domain] int = (+ scan truth);
    var pop = iv[iv.size-1];
    var ret = blockDist.createArray({0..<pop}, t);

    forall (i, eai) in zip(a.domain, a) with (var agg = new DstAggregator(t)) do 
      if (truth[i]) then agg.copy(ret[iv[i]-1], eai);
    
    return ret;
  }

  proc symmetrizeEdgeList(src, dst) {
    var m = src.size;

    var symmSrc = blockDist.createArray({0..<2*m}, int);
    var symmDst = blockDist.createArray({0..<2*m}, int);

    symmSrc[0..<m] = src; symmSrc[m..<2*m] = dst; // TODO: Needs aggregator?
    symmDst[0..<m] = dst; symmDst[m..<2*m] = src; // TODO: Needs aggregator?

    return (symmSrc, symmDst);
  }

  /* Pulled from Arkouda, removes duplicate keys from sorted arrays */
  proc uniqueFromSorted(sorted: [?aD] ?t, param needCounts = true) {
    var truth = blockDist.createArray(aD, bool);
    truth[0] = true;
    [(t,s,i) in zip(truth,sorted,aD)] if i > aD.low { t = (sorted[i-1] != s); }
    var allUnique: int = + reduce truth;

    if allUnique == aD.size {
      if needCounts {
        var c = blockDist.createArray({0..<aD.size}, int);
        c = 1;
        return (sorted, c);
      } else {
        return sorted;
      }
    }

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

    if needCounts {
      var counts = blockDist.createArray({0..<pop}, int);
      forall i in segs.domain {
        if i < segs.domain.high then counts[i] = segs[i+1] - segs[i];
        else counts[i] = sorted.domain.high+1 - segs[i];
      }
      return (ukeys, counts);
    } else {
      return ukeys;
    }
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

    /* Pulled from Arkouda, runs merge and then sort */
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

  proc removeSelfLoops(src, dst) {
    var loops = src != dst;
    var noLoopsSrc = boolIndexer(src, loops);
    var noLoopsDst = boolIndexer(dst, loops);

    return (noLoopsSrc, noLoopsDst);
  }

  proc removeMultipleEdges(src: [?sD] int, dst) {
    var edgesAsTuples = blockDist.createArray(
      sD, (int,int)
    );

    forall (e, i) in zip(edgesAsTuples, edgesAsTuples.domain) do
      e = (src[i], dst[i]);

    var (uniqueEdges, edgeCount) = uniqueFromSorted(edgesAsTuples);
    var eD = uniqueEdges.domain;
    var noDupsSrc = blockDist.createArray(eD,int);
    var noDupsDst = blockDist.createArray(eD,int);

    forall (e,u,v) in zip(uniqueEdges,noDupsSrc,noDupsDst) {
      u = e[0];
      v = e[1];
    }

    return (noDupsSrc, noDupsDst);
  }

  // Sort an array and return iv.
  proc argsort(arr) {
    var AI = blockDist.createArray(arr.domain, (arr.eltType,int));
    var iv = blockDist.createArray(arr.domain, int);

    AI = [(a, i) in zip(arr, arr.domain)] (a, i);
    Sort.TwoArrayDistributedRadixSort.twoArrayDistributedRadixSort(
      AI, comparator=myDefaultComparator
    );
    iv = [(_, i) in AI] i;

    return iv;
  }

  proc oneUpper(src: [?sD], dst) {
    var srcPerm = blockDist.createArray(sD, int);
    forall (s,i) in zip(srcPerm, srcPerm.domain) do s=i;
    var (srcUnique, srcCounts) = uniqueFromSorted(src);
    
    var dstPerm = argsort(dst);
    var sortedDst = dst[dstPerm];
    var (dstUnique, dstCounts) = uniqueFromSorted(sortedDst);

    var srcSegments = (+ scan srcCounts) - srcCounts;
    var dstSegments = (+ scan dstCounts) - dstCounts;

    var vals = blockDist.createArray(srcUnique.domain, int);

    var newSrc = broadcast(srcPerm, srcSegments, vals);
    var newDst = broadcast(dstPerm, dstSegments, vals);
    
    // var allVertices = blockDist.createArray({0..<eD.size*2}, int);
    // allVertices[0..<eD.size] = src;
    // allVertices[eD.size..<eD.size*2] = dst;
    // Sort.TwoArrayDistributedRadixSort.twoArrayDistributedRadixSort(
    //   allVertices
    // );
    // var uniqueVertices = uniqueFromSorted(allVertices, needCounts);
    // var oneUppedSrc = blockDist.createArray(eD, int);
    // var oneUppedDst = blockDist.createArray(eD, int);

    // forall i in eD {
    //   oneUppedSrc[i] = Search.binarySearch(
    //     uniqueVertices,
    //     src[i]
    //   )[1]; // TODO: Needs aggregator? Distributed binary search?
    //   oneUppedDst[i] = Search.binarySearch(
    //     uniqueVertices,
    //     dst[i]
    //   )[1]; // TODO: Needs aggregator? Distributed binary search?
    // }

    return (newSrc, newDst, srcUnique);
  }

  /* Pulled from Arkouda. 
   * Broadcast a value per segment of a segmented array to the
   * original ordering of the precursor array. For example, if
   * the original array was sorted and grouped, resulting in 
   * groups defined by <segs>, and if <vals> contains group labels,
   * then return the array of group labels corresponding to the 
   * original array. Intended to be used with arkouda.GroupBy.
   */
  proc broadcast(perm: [?D] int, segs: [?sD] int, vals: [sD] ?t) throws {
    if sD.size == 0 {
      // early out if size 0
      return blockDist.createArray({0..<D.size}, t);
    }
    // The stragegy is to go from the segment domain to the full
    // domain by forming the full derivative and integrating it
    var keepSegs = blockDist.createArray(sD, bool);
    [(k, s, i) in zip(keepSegs, segs, sD)] if i < sD.high { k = (segs[i+1] != s); }
    keepSegs[sD.high] = true;

    const numKeep = + reduce keepSegs;

    if numKeep == sD.size {
      // Compute the sparse derivative (in segment domain) of values
      var diffs = blockDist.createArray(sD, t);
      forall (i, d, v) in zip(sD, diffs, vals) {
        if i == sD.low {
          d = v;
        } else {
          d = v - vals[i-1];
        }
      }
      // Convert to the dense derivative (in full domain) of values
      var expandedVals = blockDist.createArray(D, t);
      forall (s, d) in zip(segs, diffs) with (var agg = new DstAggregator(t)) {
        agg.copy(expandedVals[s], d);
      }
      // Integrate to recover full values
      expandedVals = (+ scan expandedVals);
      // Permute to the original array order
      var permutedVals = blockDist.createArray(D, t);
      forall (i, v) in zip(perm, expandedVals) with (var agg = new DstAggregator(t)) {
        agg.copy(permutedVals[i], v);
      }
      return permutedVals;
    }
    else {
      // boolean indexing into segs and vals
      const iv = + scan keepSegs - keepSegs;
      const kD = blockDist.createDomain(0..<numKeep);
      var compressedSegs: [kD] int;
      var compressedVals: [kD] t;
      forall (i, keep, seg, val) in zip(sD, keepSegs, segs, vals) with (var segAgg = new DstAggregator(int),
                                                                        var valAgg = new DstAggregator(t)) {
        if keep {
          segAgg.copy(compressedSegs[iv[i]], seg);
          valAgg.copy(compressedVals[iv[i]], val);
        }
      }
      // Compute the sparse derivative (in segment domain) of values
      var diffs = blockDist.createArray(kD, t);
      forall (i, d, v) in zip(kD, diffs, compressedVals) {
        if i == sD.low {
          d = v;
        } else {
          d = v - compressedVals[i-1];
        }
      }
      // Convert to the dense derivative (in full domain) of values
      var expandedVals = blockDist.createArray(D, t);
      forall (s, d) in zip(compressedSegs, diffs) with (var agg = new DstAggregator(t)) {
        agg.copy(expandedVals[s], d);
      }
      // Integrate to recover full values
      expandedVals = (+ scan expandedVals);
      // Permute to the original array order
      var permutedVals = blockDist.createArray(D, t);
      forall (i, v) in zip(perm, expandedVals) with (var agg = new DstAggregator(t)) {
        agg.copy(permutedVals[i], v);
      }
      return permutedVals;
    }
  }
}