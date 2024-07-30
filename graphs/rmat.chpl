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

  timer.start(); if measureComms then startCommDiagnostics();
  var edgeView = genRMATgraph(0.57,0.19,0.19,0.05,SCALE,ns,ms,2);
  timer.stop(); if measureComms then stopCommDiagnostics();
  var edgeProcessing = timer.elapsed();
  if measureComms { 
    commDiagnosticsToCsv(getCommDiagnostics(), commFile, "edgeProcessing");
    resetCommDiagnostics();
  }
  timer.reset();

  timer.start(); if measureComms then startCommDiagnostics();
  var vertexView = new shared VertexCentricGraph(edgeView);
  timer.stop(); if measureComms then stopCommDiagnostics();
  var edgeToVertex = timer.elapsed();
  if measureComms { 
    commDiagnosticsToCsv(getCommDiagnostics(), commFile, "e2v");
    resetCommDiagnostics();
  }
  timer.reset();

  var m = edgeView.src.size;
  var n = edgeView.vertexMapper.size;

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
  
  if measureComms then startCommDiagnostics();
  runBFS(bfsLevelVertexAgg, vertexView, sources, runs);
  if measureComms then stopCommDiagnostics();
  if measureComms { 
    commDiagnosticsToCsv(getCommDiagnostics(), commFile, "levelBFSv");
    resetCommDiagnostics();
  }
  var bfsLevelVertexAggTime = (+ reduce runs) / trials;

  var line = "%s,%i,%i,%.2dr,%.2dr,%.2dr,%.2dr".format(
    SCALE,n,m,edgeProcessing,edgeToVertex,
    bfsParentVertexAggTime,bfsLevelVertexAggTime
  );
  writeln(line);
}
