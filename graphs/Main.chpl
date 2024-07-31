module Main {
  use Time;
  use Random;
  use CommDiagnostics;
  use IO.FormattedIO;
  use IO;

  use Graph;
  use Generator;
  use VertexCentricGraph;
  use EdgeCentricGraph;
  use BreadthFirstSearch;
  use Utils;

  config const filepath:string;

  config const scale = 10;
  config const edgeFactor = 16;
  config const (a,b,c,d) = (0.57,0.19,0.19,0.5);
  config const maxWeight = 2;
  
  config const trials = 64;
  config const measureComms = false;
  config const identifier = "rmat";

  config const bfsAlgorithm = "default"; // or custom

  proc runBFS(method, graph, sources, ref runs) {
    var timer:stopwatch;
    for i in 1..trials {
      timer.start();
      var res = method(graph:shared Graph, sources[i]);
      timer.stop();
      runs[i] = timer.elapsed();
      timer.reset();
    }
    return runs;
  }

  proc main() throws {
    var timer:stopwatch;
    var isRandom = if filepath.size > 0 then false else true;
    var commFileIdentifier = if measureComms && isRandom then identifier + "_" + scale:string 
                             else if measureComms then identifier else "";

    writeln("commFileIdentifier = ", commFileIdentifier);
    var ns = if isRandom then 2**scale else 0;
    var ms = if isRandom then 2**scale * edgeFactor else 0;

    writeln("commFileIdentifier = ", commFileIdentifier);
    timer.start(); if measureComms then startCommDiagnostics();
    writeln("commFileIdentifier = ", commFileIdentifier);
    var edgeView = if isRandom then genRMATgraph(a,b,c,d,scale,ns,ms,maxWeight)
                   else matrixMarketFileToGraph(filepath);
    timer.stop(); if measureComms then stopCommDiagnostics();
    writeln("commFileIdentifier = ", commFileIdentifier);
    var edgeListGenTime = timer.elapsed();
    writeln("commFileIdentifier = ", commFileIdentifier);
    if measureComms { 
      writeln("commFileIdentifier = ", commFileIdentifier);
      commDiagnosticsToCsv(getCommDiagnostics(), commFileIdentifier, "edgeListGen");
      resetCommDiagnostics();
    }
    timer.reset();

    timer.start(); if measureComms then startCommDiagnostics();
    var vertexView = new shared VertexCentricGraph(edgeView);
    timer.stop(); if measureComms then stopCommDiagnostics();
    var graphConstructionTime = timer.elapsed();
    if measureComms { 
      commDiagnosticsToCsv(getCommDiagnostics(), commFileIdentifier, "graphConstruction");
      resetCommDiagnostics();
    }
    timer.reset();

    var n = vertexView.numVertices;
    var m = vertexView.numEdges;

    var runs:[1..trials] real;
    var sourcesIdx:[1..trials] int;
    fillRandom(sourcesIdx, 0, n-1);
    var sources: [sourcesIdx.domain] int;
    for (u,ui) in zip (sources,sourcesIdx) do u = vertexView.vertexMapper[ui];
    
    if measureComms then startCommDiagnostics();
    if bfsAlgorithm == "default" then
      runBFS(bfsParentVertexAgg, vertexView, sources, runs);
    else if bfsAlgorithm == "custom" then
      runBFS(bfsLevelVertexAgg, vertexView, sources, runs);
    if measureComms then stopCommDiagnostics();
    if measureComms { 
      commDiagnosticsToCsv(getCommDiagnostics(), commFileIdentifier, "bfs");
      resetCommDiagnostics();
    }
    var bfsTime = (+ reduce runs) / trials;

    var line = "%s,%i,%i,%.2dr,%.2dr,%.2dr".format(
      scale,n,m,edgeListGenTime,graphConstructionTime,bfsTime
    );
    writeln(line);
  }
}
