/*
  This module contains the implementation of an edge-centric undirected graph.
  In other words, this is a graph whose edge list is block-distributed across
  locales. No special care is taken to ensure vertex neighborhoods are kept
  local.
*/
module EdgeCentricGraph {
  use Utils;
  use BlockDist;
  use ReplicatedDist;
  use Search;

  /*
    Stores into a replicated array the low, high, and locale identifier of
    the `this.src` array for easy locality checking.
  */
  proc generateRanges(array) {
    const ref targetLocs = array.targetLocales();
    const targetLocIds = targetLocs.id;

    // Create a domain in the range of locales that the array was distributed 
    // to. In general, this will be the whole locale space, and we deal with 
    // gaps in the array through the isEmpty() method for subdomains
    var D = {min reduce targetLocIds .. max reduce targetLocIds} 
            dmapped replicatedDist();
    var ranges: [D] (int,locale,int);
    
    // Write the local subdomain low value to the ranges array
    coforall loc in targetLocs with (ref ranges) do on loc {
      const ref localSubdomain = array.localSubdomain();
      var lo,hi:int;

      if !localSubdomain.isEmpty() {
        lo = array[localSubdomain.low];
        hi = array[localSubdomain.high];
      } else { lo = -1; hi = -1; }

      coforall rloc in targetLocs with (ref ranges) do on rloc {
        ranges[loc.id] = (lo,loc,hi);
      }
    }
    return ranges;
  }

  /*
    Class that represents a graph in an edge-centric manner. 
  */
  class EdgeCentricGraph {
    var src;
    var dst;
    var seg;
    var vertexMapper;
    var edgeRangesPerLocale;

    /*
      Using two existing arrays that represent the source and destination
      vertices of a graph, initialize an `EdgeCentricGraph` object.
    */
    proc init(src: [?sD] int, dst: [?dD] int) {
      var (symmSrc, symmDst) = symmetrizeEdgeList(src, dst);
      var (sortedSymmSrc, sortedSymmDst) = sortEdgeList(symmSrc, symmDst);
      var (looplessSortedSymmSrc, looplessSortedSymmDst) = removeSelfLoops(
        sortedSymmSrc, sortedSymmDst
      );
      var (deduppedLooplessSortedSymmSrc, deduppedLooplessSortedSymmDst) = 
        removeMultipleEdges(
          looplessSortedSymmSrc,
          looplessSortedSymmDst
      );

      var (finalSrc, finalDst, vertices) = oneUpper(
        deduppedLooplessSortedSymmSrc,
        deduppedLooplessSortedSymmDst
      );

      var (srcUnique, srcCounts) = uniqueFromSorted(finalSrc);
      var srcCumulativeCounts = + scan srcCounts;
      var segments = blockDist.createArray({0..srcUnique.size}, int);
      segments[0] = 0;
      segments[1..] = srcCumulativeCounts;

      this.src = finalSrc; 
      this.dst = finalDst;
      this.seg = segments;
      this.vertexMapper = vertices;
      this.edgeRangesPerLocale = generateRanges(this.src);
    }

    /*
      Returns the array slice containing the neighbors of a given vertex `u`. 
      Expects `u` to be an original vertex value, requiring a search to get the 
      internal representation of the vertex `u` which is equivalent to the index 
      of where `u` appears in `this.vertexMapper`.
    */
    proc neighbors(u:int, param ensureLocal:bool=false, loc:locale=here) {
      var (_,ui) = binarySearch(this.vertexMapper, u);

      if !ensureLocal then
        return this.neighborsInternal(ui, ensureLocal=false);
      else
        return this.neighborsInternal(ui, ensureLocal=true);
    }

    /* 
      Similar to method `neighbors` but instead returns the neighbors of `ui`
      assuming that `ui` is the internal representation of a vertex `u`.
    */
    proc neighborsInternal(ui:int, 
                           param ensureLocal:bool=false, loc:locale=here) {
      if !ensureLocal then {
        const ref neighborhood = this.dst[this.seg[ui]..<this.seg[ui+1]];
        return neighborhood;
      } else {
        var adjListStart = this.seg[ui];
        var adjListEnd = this.seg[ui+1];
        var srcLo = this.src.localSubdomain(loc).low;
        var srcHi = this.src.localSubdomain(loc).high;
        var actualStart = max(adjListStart, srcLo);
        var actualEnd = min(srcHi, adjListEnd);
        const ref neighborhood = this.dst.localSlice(actualStart..actualEnd);
        return neighborhood;
      }
    }
  }
}