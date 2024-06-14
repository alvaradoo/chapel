module EdgeCentricGraph {
  use Utils;
  use BlockDist;

  class EdgeCentricGraph {
    var source;
    var destination;
    var vertices;
    var segments;

    proc init(const ref src: [?sD] int, const ref dst: [?dD] int) {
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

      var (srcUnique, srcCounts) = uniqueFromSorted(src);
      var srcSegments = (+ scan srcCounts) - srcCounts;

      this.source = finalSrc; 
      this.destination = finalDst;
      this.vertices = vertices;

      // var neighborCount = blockDist.createArray(
      //   this.vertices.domain, atomic int
      // );
      // forall u in this.source do neighborCount[u].add(1);
      
      // var neighborCountNotAtomic = blockDist.createArray(
      //   this.vertices.domain, int
      // );
      // forall i in neighborCount.domain do
      //   neighborCountNotAtomic[i] = neighborCount[i].read();

      // var neighborCountScan = + scan neighborCountNotAtomic;
      // var segments = blockDist.createArray({0..this.vertices.size}, int);
      // segments[0] = 0;
      // segments[1..] = neighborCountScan;

      this.segments = srcSegments;
    }

    proc neighbors(n:int) {
      const ref neighborhood = 
        this.destination[this.segments[n]..<this.segments[n+1]];
      return neighborhood;
    }
  }
}