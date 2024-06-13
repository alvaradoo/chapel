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

    proc init(graph: shared EdgeCentricGraph(?)) {
      var vertices = blockDist.createArray(
        {0..<graph.vertices.size}, vertex
      );

      forall (u,v) in zip(graph.source, graph.destination) {
        ref currVertex = vertices[u];

        // TODO: Needs specialty aggregator.
        currVertex.neighbors.pushBack(v);
      }

      forall l in vertices do l.sortNeighbors();
      this.adjacencies = vertices;
    }

    proc neighbors(n:int) const ref {
      return this.adjacencies[n].neighbors;
    }
  }
}