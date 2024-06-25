module BreadthFirstSearch {
  // Chapel modules.
  use List;
  use BlockDist;

  // Package modules.
  use CopyAggregation;
  use Search;

  // Arachne modules.
  use EdgeCentricGraph;
  use VertexCentricGraph;
  use Aggregators;

  proc bfsNoAggregation(graph, source, param returnMax:bool = false) {
    var maxV:int = -1;
    var frontiers: [{0..1}] list(int, parSafe=true);
    frontiers[0] = new list(int, parSafe=true);
    frontiers[1] = new list(int, parSafe=true);

    var frontiersIdx = 0; 
    var currLevel = 0;
    var internalSource = binarySearch(graph.vertexMapper, source)[1];
    frontiers[frontiersIdx].pushBack(internalSource);

    var depth = blockDist.createArray(graph.vertexMapper.domain, int);
    depth = -1;
    depth[internalSource] = currLevel;

    while true {
      var pendingWork:bool;
      forall u in frontiers[frontiersIdx] with (|| reduce pendingWork, ref maxV) {
        for v in graph.neighborsInternal(u) {
          if depth[v] == -1 {
            pendingWork = true;
            depth[v] = currLevel + 1;
            frontiers[(frontiersIdx + 1) % 2].pushBack(v);
            if returnMax then maxV = v;
          }
        }
      }
      frontiers[frontiersIdx].clear();
      if !pendingWork then break;
      currLevel += 1;
      frontiersIdx = (frontiersIdx + 1) % 2;
    }
    if returnMax then return (depth, maxV);
    else return depth;
  }

  proc bfsAggregationEdge(graph: shared EdgeCentricGraph(?), source, 
                      param returnMax:bool = false) {
    coforall loc in Locales with(ref frontiers) do on loc {
      frontiers[0] = new list(int, parSafe=true);
      frontiers[1] = new list(int, parSafe=true);
    }
    frontiersIdx = 0;
    var internalSource = binarySearch(graph.vertexMapper, source)[1];

    for lc in graph.findLocs(internalSource) {
      on lc do frontiers[frontiersIdx].pushBack(internalSource);
    }
    var currLevel = 0; 
    var depth = blockDist.createArray(graph.vertexMapper.domain, int);
    var maxV:int = -1;
    depth = -1;
    depth[internalSource] = currLevel;

    while true {
      var pendingWork:bool;
      coforall loc in Locales 
      with (|| reduce pendingWork, ref depth, ref frontiers, ref maxV) {
        on loc {
          forall u in frontiers[frontiersIdx] 
          with (|| reduce pendingWork, 
                var frontierAgg = new listDstAggregator(int),
                ref maxV)
          {
            for v in graph.neighborsInternal(u, ensureLocal=true) {
              if depth[v] == -1 {
                pendingWork = true;
                depth[v] = currLevel + 1; 
                var locs = graph.findLocs(v);
                for lc in locs do frontierAgg.copy(lc.id, v);
                if returnMax then maxV = v;
              }
            }
          }
          frontiers[frontiersIdx].clear();
        }
      }
      if !pendingWork then break;
      currLevel += 1;
      frontiersIdx = (frontiersIdx + 1) % 2;
    }
    if returnMax then return (depth, maxV);
    else return depth;
  }

  proc bfsAggregationVertex(graph: shared VertexCentricGraph(?), source, 
                            param returnMax:bool = false) {
    coforall loc in Locales with(ref frontiers) do on loc {
      frontiers[0] = new list(int, parSafe=true);
      frontiers[1] = new list(int, parSafe=true);
    }
    frontiersIdx = 0;
    var internalSource = binarySearch(graph.vertexMapper, source)[1];

    on graph.findLoc(internalSource) do {
      frontiers[frontiersIdx].pushBack(internalSource);
    }
    var currLevel = 0; 
    var depth = blockDist.createArray(graph.vertexMapper.domain, int);
    var maxV:int = -1;
    depth = -1;
    depth[internalSource] = currLevel;

    while true {
      var pendingWork:bool;
      coforall loc in Locales 
      with (|| reduce pendingWork, ref depth, ref frontiers, ref maxV) 
      do on loc {
        forall u in frontiers[frontiersIdx] 
        with (|| reduce pendingWork, var frontierAgg=new listDstAggregator(int),
              ref maxV) 
        {
          for v in graph.neighborsInternal(u) {
            if depth[v] == -1 {
              pendingWork = true;
              depth[v] = currLevel + 1; 
              frontierAgg.copy(graph.findLoc(v).id, v);
              if returnMax then maxV = v;
            }
          }
        }
        frontiers[frontiersIdx].clear();
      }
      if !pendingWork then break;
      currLevel += 1;
      frontiersIdx = (frontiersIdx + 1) % 2;
    }
    if returnMax then return (depth, maxV);
    else return depth;
  }
}