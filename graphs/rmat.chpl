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

config const SCALE = 10;
config const eFACTOR = 16;
config const trials = 64;
config const measureComms = false;

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

proc main() {
  var timer:stopwatch;
  var ns = 2**SCALE;
  var ms = 2**SCALE * eFACTOR;
  var commFile = "rmat_" + SCALE:string;
  
  writeln("$"*25);
  writeln("RESULTS FOR RMAT ", SCALE:string, ": ");

  timer.start(); if measureComms then startCommDiagnostics();
  var edgeView = genRMATgraph(0.57,0.19,0.19,0.05,SCALE,ns,ms,2);
  timer.stop(); if measureComms then stopCommDiagnostics();
  var edgeProcessing = timer.elapsed();
  if measureComms { 
    commDiagnosticsToCsv(getCommDiagnostics(), commFile, "edgeProcessing");
    resetCommDiagnostics();
  }
  writeln("Creating RMAT graph took: ", edgeProcessing, " secs");
  timer.reset();

  timer.start(); if measureComms then startCommDiagnostics();
  var vertexView = new shared VertexCentricGraph(edgeView);
  timer.stop(); if measureComms then stopCommDiagnostics();
  var edgeToVertex = timer.elapsed();
  if measureComms { 
    commDiagnosticsToCsv(getCommDiagnostics(), commFile, "e2v");
    resetCommDiagnostics();
  }
  writeln("Converting edge graph to vertex graph took: ", edgeToVertex, " secs");
  timer.reset();

  var m = edgeView.src.size;
  var n = edgeView.vertexMapper.size;
  writeln("Graph composed of ", m, " edges and ", n, " vertices");

  var runs:[1..trials] real;
  var sources:[1..trials] int;
  fillRandom(sources, edgeView.vertexMapper.first, edgeView.vertexMapper.last);
  
  if measureComms then startCommDiagnostics();
  runBFS(bfsParentVertexAgg, vertexView, sources, runs);
  if measureComms then stopCommDiagnostics();
  if measureComms { 
    commDiagnosticsToCsv(getCommDiagnostics(), commFile, "parentBFSv");
    resetCommDiagnostics();
  }
  var bfsParentVertexAggTime = (+ reduce runs) / trials;
  writeln("bfsParentVertexAgg on vertex graph took: ", 
          bfsParentVertexAggTime, " secs");

  if measureComms then startCommDiagnostics();
  runBFS(bfsParentEdgeAgg, edgeView, sources, runs);
  if measureComms then stopCommDiagnostics();
  if measureComms { 
    commDiagnosticsToCsv(getCommDiagnostics(), commFile, "parentBFSe");
    resetCommDiagnostics();
  }
  var bfsParentEdgeAggTime = (+ reduce runs) / trials;
  writeln("bfsParentEdgeAgg on edge graph took: ", 
          bfsParentEdgeAggTime, " secs");
  
  if measureComms then startCommDiagnostics();
  runBFS(bfsLevelVertexAgg, vertexView, sources, runs);
  if measureComms then stopCommDiagnostics();
  if measureComms { 
    commDiagnosticsToCsv(getCommDiagnostics(), commFile, "levelBFSv");
    resetCommDiagnostics();
  }
  var bfsLevelVertexAggTime = (+ reduce runs) / trials;
  writeln("bfsLevelVertexAgg on vertex graph took: ", 
          bfsLevelVertexAggTime, " secs");
  
  if measureComms then startCommDiagnostics();
  runBFS(bfsLevelEdgeAgg, edgeView, sources, runs);
  if measureComms then stopCommDiagnostics();
  if measureComms { 
    commDiagnosticsToCsv(getCommDiagnostics(), commFile, "levelBFSe");
    resetCommDiagnostics();
  }
  var bfsLevelEdgeAggTime = (+ reduce runs) / trials;
  writeln("bfsLevelEdgeAgg on edge graph took: ", 
          bfsLevelEdgeAggTime, " secs");

  writeln();
  var line = "%s,%.4dr,%.4dr,%.4dr,%.4dr,%.4dr,%.4dr".format(
    SCALE,edgeProcessing,edgeToVertex,bfsParentVertexAggTime,
    bfsParentEdgeAggTime,bfsLevelVertexAggTime,bfsLevelEdgeAggTime
  );
  writeln(line);
}
