/*
  This module contains the implementation of a vertex-centric undirected graph.
  In other words, this is a graph whose vertices are stored in an array that is 
  block-distributed across locales.
*/
module VertexCentricGraph {
  use List;
  use BlockDist;
  use EdgeCentricGraph;
  use Search;

  /*
    Record representing the vertex of a graph. It is used within the class
    `VertexCentricGraph` to represent a vertex and its adjacencies.
  */
  record vertex {
    var neighbors:list(int,parSafe=true);

    /*
      Sort the neighbors of `this` vertex.
    */
    proc ref sortNeighbors() {
      this.neighbors.sort();
    }
  }

  /*
    Class that represents a graph in a vertex-centric manner.
  */
  class VertexCentricGraph {
    var adjacencies;
    var vertexMapper;

    /*
      Using an existing `EdgeCentricGraph` object, initialize a 
      `VertexCentricGraph` object.
    */
    proc init(graph: shared EdgeCentricGraph(?)) {
      var adjacencies = blockDist.createArray(
        {0..<graph.vertexMapper.size}, vertex
      );

      forall (u,v) in zip(graph.src, graph.dst) {
        ref currVertex = adjacencies[u];
        currVertex.neighbors.pushBack(v); // TODO: Needs specialty aggregator.
      }

      forall l in adjacencies do l.sortNeighbors();
      this.adjacencies = adjacencies;
      this.vertexMapper = graph.vertexMapper;
    }

    /*
      Returns the `list` containing the neighbors of a given vertex `u`. Expects
      `u` to be an original vertex value, requiring a search to get the internal
      representation of the vertex `u` which is equivalent to the index of where
      `u` appears in `this.vertexMapper`.
    */
    proc neighbors(u:int) const ref {
      var (_,ui) = binarySearch(this.vertexMapper, u);
      return this.adjacencies[ui].neighbors;
    }

    /* 
      Similar to method `neighbors` but instead returns the neighbors of `ui`
      assuming that `ui` is the internal representation of a vertex `u`.
    */
    proc neighborsInternal(ui:int) const ref {
      return this.adjacencies[ui].neighbors;
    }
  }
}