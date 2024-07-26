module BreadthFirstSearch {
  // Chapel modules.
  use List;
  use Set;
  use BlockDist;
  use ReplicatedDist;
  use ReplicatedVar;

  // Package modules.
  use CopyAggregation;
  use Search;

  // Arachne modules.
  use Graph;
  use EdgeCentricGraph;
  use VertexCentricGraph;
  use Aggregators;

  /*
    Helper method to convert parent array to level array. Assumes passed source
    is the internal representation of the vertex.
  */
  proc parentToLevel(in parent, source) {
    var level = blockDist.createArray(parent.domain, int);
    var visited = blockDist.createArray(parent.domain, bool);
    var currLevel = 0;
    level = -1;
    visited = false;

    var frontiers: [{0..1}] list(int, parSafe=true);
    frontiers[0] = new list(int, parSafe=true);
    frontiers[1] = new list(int, parSafe=true);
    frontiersIdx = 0;
    frontiers[frontiersIdx].pushBack(source);

    forall (p,v) in zip(parent, visited) do if p != -1 then v = true;
    var visitedReduced = || reduce visited;
    while visitedReduced {
      coforall loc in Locales 
      with (ref level, ref parent, ref frontiers) 
      do on loc {
        forall u in frontiers[frontiersIdx] {
          level[u] = currLevel;
          visited[u] = false;
          parent[u] = -1;
        }
        var lo = parent.localSubdomain(loc).low;
        var hi = parent.localSubdomain(loc).high;
        const ref lSlice = parent.localSlice(lo..hi);
        forall (v,d) in zip(lSlice,lo..hi) {
          var isFound = frontiers[frontiersIdx].find(v);
          if isFound != -1 then frontiers[(frontiersIdx + 1) % 2].pushBack(d);
        }
      }
      currLevel += 1;
      frontiers[frontiersIdx].clear();
      frontiersIdx = (frontiersIdx + 1) % 2;
      visitedReduced = || reduce visited;
    }
    return level;
  }

  proc bfsParentVertexAgg(inGraph: shared Graph, source:int) {
    var graph = toVertexCentricGraph(inGraph);

    var lo = graph.vertexMapper.domain.low;
    var hi = graph.vertexMapper.domain.high;
    const myTargetLocales = reshape(Locales, {0..0, 0..#numLocales});

    // Change frontierMA.
    frontierMA.D = blockDist.createDomain({0..1, lo..hi},
                                          targetLocales=myTargetLocales);
    frontierMA.A = false;
    frontiersIdx = 0;

    // Change parentsMA.
    parentsMA.D = blockDist.createDomain({lo..hi});
    parentsMA.A = -1;
    
    var internalSource = binarySearch(graph.vertexMapper, source)[1];
    frontierMA.A[frontiersIdx,internalSource] = true;
    parentsMA.A[internalSource] = internalSource;

    while true {
      var pendingWork:bool;
      coforall loc in Locales 
      with (|| reduce pendingWork, ref frontierMA, ref parentsMA) 
      do on loc {
        var lo = parentsMA.A.localSubdomain().low;
        var hi = parentsMA.A.localSubdomain().high;
        forall (u,d) in 
        zip(frontierMA.A[frontiersIdx,lo..hi],frontierMA.D[frontiersIdx,lo..hi]) 
        with (|| reduce pendingWork, 
              var frontierAgg = new SpecialtyVertexDstAggregator((int,int)),
              ref frontierMA, ref parentsMA) {
          if u {
            for v in graph.neighborsInternal(d) {
              var destID = graph.findLoc(v).id;
              if destID != here.id {
                writeln("sending v = ", v, " to ", destID, " from ", here.id);
                frontierAgg.copy(destID, (v,d));
              }
              else {
                if parentsMA.A[v] == -1 {
                  writeln("locally updating v = ", v);
                  parentsMA.A[v] = d;
                  frontierMA.A[(frontiersIdx+1)%2,v] = true;
                }
              }
            }
            pendingWork = true;
          }
        }
      }
      if !pendingWork then break;
      frontierMA.A[frontiersIdx,..] = false;
      frontiersIdx = (frontiersIdx+1)%2;
    }
    return parentsMA.A;
  }
  
  proc bfsParentEdgeAgg(inGraph: shared Graph, source:int) {
    var graph = toEdgeCentricGraph(inGraph);

    coforall loc in Locales do on loc {
      var lo = graph.edgeRangesPerLocale[loc.id][0];
      var hi = graph.edgeRangesPerLocale[loc.id][2];

      fDBA[0].D = {lo..hi};
      fDBA[1].D = {lo..hi};
      fDBA[0].A = false;
      fDBA[1].A = false;
      parents(1).D = {lo..hi};
      parents(1).A = -1;
    }
    frontiersIdx = 0;
    var internalSource = binarySearch(graph.vertexMapper, source)[1];

    for lc in graph.findLocs(internalSource) {
      on lc {
        fDBA[frontiersIdx].A[internalSource] = true;
        parents(1).A[internalSource] = internalSource;
      }
    }
    
    while true {
      var pendingWork:bool;
      coforall loc in Locales 
      with (|| reduce pendingWork, ref fDBA) 
      do on loc {
        forall (u,d) in zip(fDBA[frontiersIdx].A,fDBA[frontiersIdx].D) 
        with (|| reduce pendingWork, 
              var frontierAgg = new SpecialtyEdgeDstAggregator((int,int))) {
          if u {
            for v in graph.neighborsInternal(d) {
              var locs = graph.findLocs(v);
              for lc in locs do frontierAgg.copy(lc.id, (v,d));
            }
            pendingWork = true;
          }
        }
        fDBA[frontiersIdx].A = false;
      }
      if !pendingWork then break;
      frontiersIdx = (frontiersIdx + 1) % 2;
    }
    return parentsToBlockDistParents(graph.vertexMapper.size);
  }

  proc bfsLevelVertexAgg(inGraph: shared Graph, source:int) {
    var graph = toVertexCentricGraph(inGraph);

    coforall loc in Locales with(ref frontiers) do on loc {
      frontiers[0] = new list(int, parSafe=true);
      frontiers[1] = new list(int, parSafe=true);
    }
    frontiersIdx = 0;
    var internalSource = binarySearch(graph.vertexMapper, source)[1];

    on graph.findLoc(internalSource) {
      frontiers[frontiersIdx].pushBack(internalSource);
    }
    var currLevel = 0; 
    var level = blockDist.createArray(graph.vertexMapper.domain, int);
    level = -1;

    while true {
      var pendingWork:bool;
      coforall loc in Locales 
      with (|| reduce pendingWork, ref level, ref frontiers) 
      do on loc {
        forall u in frontiers[frontiersIdx] 
        with (|| reduce pendingWork, var frontierAgg=new listDstAggregator(int)) 
        {
          if level[u] == -1 {
            level[u] = currLevel;
            for v in graph.neighborsInternal(u) do 
              frontierAgg.copy(graph.findLoc(v).id, v);
            pendingWork = true;
          }
        }
        frontiers[frontiersIdx].clear();
      }
      if !pendingWork then break;
      currLevel += 1;
      frontiersIdx = (frontiersIdx + 1) % 2;
    }
    return level;
  }

  proc bfsLevelVertex(inGraph: shared Graph, source:int) {
    var graph = toVertexCentricGraph(inGraph);

    var frontiers: [{0..1}] list(int, parSafe=true);
    frontiers[0] = new list(int, parSafe=true);
    frontiers[1] = new list(int, parSafe=true);

    frontiersIdx = 0;
    var currLevel = 0; 
    var internalSource = binarySearch(graph.vertexMapper, source)[1];
    frontiers[frontiersIdx].pushBack(internalSource);
    
    var level = blockDist.createArray(graph.vertexMapper.domain, int);
    level = -1;

    while true {
      var pendingWork:bool;
      forall u in frontiers[frontiersIdx] with (|| reduce pendingWork) {
        if level[u] == -1 {
          level[u] = currLevel;
          for v in graph.neighborsInternal(u) do 
            frontiers[(frontiersIdx + 1) % 2].pushBack(v);
          pendingWork = true;
        }
      }
      frontiers[frontiersIdx].clear();
      if !pendingWork then break;
      currLevel += 1;
      frontiersIdx = (frontiersIdx + 1) % 2;
    }
    return level;
  }

  proc bfsLevelEdgeAgg(inGraph: shared Graph, source:int) {
    var graph = toEdgeCentricGraph(inGraph);

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
    var level = blockDist.createArray(graph.vertexMapper.domain, int);
    level = -1;

    while true {
      var pendingWork:bool;
      coforall loc in Locales 
      with (|| reduce pendingWork, ref level, ref frontiers) 
      do on loc {
        forall u in frontiers[frontiersIdx] 
        with (|| reduce pendingWork, var frontierAgg=new listDstAggregator(int)) 
        {
          if level[u] == -1 {
            level[u] = currLevel;
            for v in graph.neighborsInternal(u) {
              var locs = graph.findLocs(v);
              for lc in locs do frontierAgg.copy(lc.id, v);
            }
            pendingWork = true;
          }
        }
        frontiers[frontiersIdx].clear();
      }
      if !pendingWork then break;
      currLevel += 1;
      frontiersIdx = (frontiersIdx + 1) % 2;
    }
    return level;
  }

  proc bfsLevelEdge(inGraph: shared Graph, source:int) {
    var graph = toEdgeCentricGraph(inGraph);

    var frontiers: [{0..1}] list(int, parSafe=true);
    frontiers[0] = new list(int, parSafe=true);
    frontiers[1] = new list(int, parSafe=true);

    frontiersIdx = 0;
    var currLevel = 0; 
    var internalSource = binarySearch(graph.vertexMapper, source)[1];
    frontiers[frontiersIdx].pushBack(internalSource);
    
    var level = blockDist.createArray(graph.vertexMapper.domain, int);
    level = -1;

    while true {
      var pendingWork:bool;
      forall u in frontiers[frontiersIdx] with (|| reduce pendingWork) {
        if level[u] == -1 {
          level[u] = currLevel;
          for v in graph.neighborsInternal(u) do 
            frontiers[(frontiersIdx + 1) % 2].pushBack(v);
          pendingWork = true;
        }
      }
      frontiers[frontiersIdx].clear();
      if !pendingWork then break;
      currLevel += 1;
      frontiersIdx = (frontiersIdx + 1) % 2;
    }
    return level;
  }

  proc bfsNoAggregationVertex(inGraph: shared Graph, source:int) {
    var graph = toVertexCentricGraph(inGraph);

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
      forall u in frontiers[frontiersIdx] with (|| reduce pendingWork) {
        for v in graph.neighborsInternal(u) {
          if depth[v] == -1 {
            pendingWork = true;
            depth[v] = currLevel + 1;
            frontiers[(frontiersIdx + 1) % 2].pushBack(v);
          }
        }
      }
      frontiers[frontiersIdx].clear();
      if !pendingWork then break;
      currLevel += 1;
      frontiersIdx = (frontiersIdx + 1) % 2;
    }
    return depth;
  }

  proc bfsNoAggregationEdge(inGraph: shared Graph, source:int) {
    var graph = toEdgeCentricGraph(inGraph);

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
      forall u in frontiers[frontiersIdx] with (|| reduce pendingWork) {
        for v in graph.neighborsInternal(u) {
          if depth[v] == -1 {
            pendingWork = true;
            depth[v] = currLevel + 1;
            frontiers[(frontiersIdx + 1) % 2].pushBack(v);
          }
        }
      }
      frontiers[frontiersIdx].clear();
      if !pendingWork then break;
      currLevel += 1;
      frontiersIdx = (frontiersIdx + 1) % 2;
    }
    return depth;
  }

  proc bfsAggregationVertex(inGraph: shared Graph, source:int) {
    var graph = toVertexCentricGraph(inGraph);

    coforall loc in Locales with(ref frontiers) do on loc {
      frontiers[0] = new list(int, parSafe=true);
      frontiers[1] = new list(int, parSafe=true);
    }
    frontiersIdx = 0;
    var internalSource = binarySearch(graph.vertexMapper, source)[1];

    on graph.findLoc(internalSource) {
      frontiers[frontiersIdx].pushBack(internalSource);
    }
    var currLevel = 0; 
    var depth = blockDist.createArray(graph.vertexMapper.domain, int);
    depth = -1;
    depth[internalSource] = currLevel;

    while true {
      var pendingWork:bool;
      coforall loc in Locales 
      with (|| reduce pendingWork, ref depth, ref frontiers) 
      do on loc {
        forall u in frontiers[frontiersIdx] 
        with (|| reduce pendingWork, var frontierAgg=new listDstAggregator(int)) 
        {
          for v in graph.neighborsInternal(u) {
            if depth[v] == -1 {
              pendingWork = true;
              depth[v] = currLevel + 1; 
              frontierAgg.copy(graph.findLoc(v).id, v);
            }
          }
        }
        frontiers[frontiersIdx].clear();
      }
      if !pendingWork then break;
      currLevel += 1;
      frontiersIdx = (frontiersIdx + 1) % 2;
    }
    return depth;
  }

  proc bfsAggregationEdge(inGraph: shared Graph, source:int) {
    var graph = toEdgeCentricGraph(inGraph);

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
    depth = -1;
    depth[internalSource] = currLevel;

    while true {
      var pendingWork:bool;
      coforall loc in Locales
      with (|| reduce pendingWork, ref depth, ref frontiers)
      do on loc {
        forall u in frontiers[frontiersIdx] 
        with (|| reduce pendingWork, var frontierAgg=new listDstAggregator(int))
        {
          for v in graph.neighborsInternal(u, ensureLocal=true) {
            if depth[v] == -1 {
              pendingWork = true;
              depth[v] = currLevel + 1; 
              var locs = graph.findLocs(v);
              for lc in locs do frontierAgg.copy(lc.id, v);
            }
          }
        }
        frontiers[frontiersIdx].clear();
      }
      if !pendingWork then break;
      currLevel += 1;
      frontiersIdx = (frontiersIdx + 1) % 2;
    }
    return depth;
  }

  proc topDownFine(ref currentFrontier, ref nextFrontier, ref depth, 
                   inGraph: shared Graph, currLevel:int): bool {
    var graph = toVertexCentricGraph(inGraph);
    var pendingWork:bool;
    forall u in currentFrontier with (|| reduce pendingWork, ref nextFrontier) {
      for v in graph.neighborsInternal(u) {
        if depth[v] == -1 {
          pendingWork = true;
          depth[v] = currLevel + 1;
          nextFrontier.add(v);
        }
      }
    }
    return pendingWork;
  }

  proc bottomUpFine(ref currentFrontier, ref nextFrontier, ref depth, 
                   inGraph: shared Graph, currLevel:int): bool {
    var graph = toVertexCentricGraph(inGraph);
    var pendingWork:bool;
    forall v in graph.vertexMapper.domain with (|| reduce pendingWork, ref nextFrontier) {
      if depth[v] == -1 {
        for u in graph.neighborsInternal(v) {
          if currentFrontier[u] {
            pendingWork = true;
            depth[v] = currLevel + 1;
            nextFrontier[v] = true;
          }
        }
      }
    }
    return pendingWork;
  }

  proc testAndSwitch(inGraph: shared Graph, ref currentFrontier, param ftype,
                     alpha:real, beta:real) {
    var graph = toVertexCentricGraph(inGraph);
    var mf, mu, nf, n: int;

    nf = currentFrontier.size;
    n = graph.vertexMapper.size;

    if ftype == "top" {
      forall v in currentFrontier with (+ reduce mf) do
        mf += graph.adjacencies[v].neighbors.size;
    }
    else {
      forall (i,v) in zip(currentFrontier.domain, currentFrontier) with (+ reduce mf) do
        if v then mf += graph.adjacencies[i].neighbors.size;
    }

    mu = graph.numEdges - mf;

    if mf > (mu / alpha) then return 0;
    else if nf < (n / beta) then return 1;
    else return -1;
  }

  /*
    Experimental breadth-first search version that requires the frontiers to be
    sets to enable a hybrid neighborhood expansion mechanism swapping between
    top-down and bottom-up neighborhood expansion as needed.
  */
  proc bfsNoAggregationVertexHybrid(inGraph: shared Graph, source:int, 
                                    alpha, beta) {
    var graph = toVertexCentricGraph(inGraph);
    var placeholder = blockDist.createArray(graph.vertexMapper.domain, bool);

    var frontiers: [{0..1}] set(int, parSafe=true);
    frontiers[0] = new set(int, parSafe=true);
    frontiers[1] = new set(int, parSafe=true);

    var frontiersB: [{0..1}] placeholder.type;
    frontiersB[0] = blockDist.createArray(graph.vertexMapper.domain, bool);
    frontiersB[1] = blockDist.createArray(graph.vertexMapper.domain, bool);

    var frontiersIdx = 0; 
    var currLevel = 0;
    var internalSource = binarySearch(graph.vertexMapper, source)[1];
    frontiers[frontiersIdx].add(internalSource);

    var depth = blockDist.createArray(graph.vertexMapper.domain, int);
    depth = -1;
    depth[internalSource] = currLevel;
    var neighborhoodExpansionType = 1;

    while true {
      var pendingWork:bool;
      if neighborhoodExpansionType == 0 {
        // change to bit map
        forall v in frontiers[frontiersIdx] do 
          frontiersB[frontiersIdx][v] = true;

        pendingWork = bottomUpFine(frontiersB[frontiersIdx], 
                                   frontiersB[(frontiersIdx + 1) % 2],
                                   depth, inGraph, currLevel
                                  );

        frontiersB[frontiersIdx] = false;
        neighborhoodExpansionType = testAndSwitch(inGraph, 
                                                  frontiersB[(frontiersIdx + 1) % 2], "bottom",
                                                  alpha, beta);
      }
      else if neighborhoodExpansionType == 1 {
        // change to set
        forall v in frontiersB[frontiersIdx] do 
          frontiers[frontiersIdx].add(v);

        pendingWork = topDownFine(frontiers[frontiersIdx], 
                                  frontiers[(frontiersIdx + 1) % 2],
                                  depth, inGraph, currLevel
                                );
        
        frontiers[frontiersIdx].clear();
        neighborhoodExpansionType = testAndSwitch(inGraph, 
                                                  frontiers[(frontiersIdx + 1) % 2], "top",
                                                  alpha, beta);
      }
      else {
        break;
      }      
      if !pendingWork then break;
      currLevel += 1;
      frontiersIdx = (frontiersIdx + 1) % 2;
    }
    return depth;
  }
}