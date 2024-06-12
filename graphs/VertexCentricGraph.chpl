module VertexCentricGraph {
    use List;
    use BlockDist;
    use EdgeCentricGraph;

    record vertex {
        var neighbors:list(int,parSafe=true);

        proc ref sortNeighbors() {
            this.neighbors.sort();
        }
    }

    class VertexCentricGraph {
        var adjacencies;

        proc init(edgeCentricGraph : shared EdgeCentricGraph(?)) {
            var vertices = blockDist.createArray(
                {0..<edgeCentricGraph.vertices.size}, vertex
            );

            forall (u,v) in zip(edgeCentricGraph.source, edgeCentricGraph.destination) {
                ref currVertex = vertices[u];
                currVertex.neighbors.pushBack(v);
            }

            forall l in vertices do l.sortNeighbors();

            this.adjacencies = vertices;
        }
    }
}