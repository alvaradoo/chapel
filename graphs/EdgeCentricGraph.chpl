/*
  This module contains the implementation of an edge-centric undirected graph.
  In other words, this is a graph whose edge list is block-distributed across
  locales. No special care is taken to ensure vertex neighborhoods are kept
  local.
*/
module EdgeCentricGraph {
  use Utils;
  use BlockDist;
  use Search;

  /*
    Class that represents a graph in an edge-centric manner. 
  */
  class EdgeCentricGraph {
    var src;
    var dst;
    var seg;
    var vertexMapper;

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
    }

    /*
      Returns the array slice containing the neighbors of a given vertex `u`. 
      Expects `u` to be an original vertex value, requiring a search to get the 
      internal representation of the vertex `u` which is equivalent to the index 
      of where `u` appears in `this.vertexMapper`.
    */
    proc neighbors(u:int) {
      var (_,ui) = binarySearch(this.vertexMapper, u);
      const ref neighborhood = this.dst[this.seg[ui]..<this.seg[ui+1]];
      return neighborhood;
    }

    /* 
      Similar to method `neighbors` but instead returns the neighbors of `ui`
      assuming that `ui` is the internal representation of a vertex `u`.
    */
    proc neighborsInternal(ui:int) {
      const ref neighborhood = this.dst[this.seg[ui]..<this.seg[ui+1]];
      return neighborhood;
    }
  }
}