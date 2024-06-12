module EdgeCentricGraph {
    use Utils;
    use BlockDist;

    class EdgeCentricGraph {
        var source;
        var destination;
        var vertices;
        var segments;

        proc init(const ref src: [?sD] int, const ref dst: [?dD] int) {
            var symmEdges = symmetrizeEdgeList(src, dst);
            var sortedSymmEdges = sortEdgeList(symmEdges[0], symmEdges[1]);
            var looplessSortedSymmEdges = removeSelfLoops(
                sortedSymmEdges[0],
                sortedSymmEdges[1]
            );
            var deduppedLooplessSortedSymmEdges = removeMultipleEdges(
                looplessSortedSymmEdges[0],
                looplessSortedSymmEdges[1]
            );
            var oneUppedDeduppedLooplessSortedSymmEdges = oneUpper(
                deduppedLooplessSortedSymmEdges[0],
                deduppedLooplessSortedSymmEdges[1]
            );

            this.source = oneUppedDeduppedLooplessSortedSymmEdges[0]; 
            this.destination = oneUppedDeduppedLooplessSortedSymmEdges[1];
            this.vertices = oneUppedDeduppedLooplessSortedSymmEdges[2];

            var neighborCount = blockDist.createArray(
                this.vertices.domain, atomic int
            );
            forall u in this.source do neighborCount[u].add(1);
            
            var neighborCountNotAtomic = blockDist.createArray(
                this.vertices.domain, int
            );
            forall i in neighborCount.domain do
                neighborCountNotAtomic[i] = neighborCount[i].read();

            var neighborCountScan = + scan neighborCountNotAtomic;
            var segments = blockDist.createArray({0..this.vertices.size}, int);
            segments[0] = 0;
            segments[1..] = neighborCountScan;

            this.segments = segments;
        }
    }
}