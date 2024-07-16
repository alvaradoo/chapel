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

config const scaleStart = 10;
config const scaleEnd = 12;
config const trials = 10;
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
  var now = dateTime.now();
  var outputFilename = "bfs_" + numLocales:string + "L_rmat_" + scaleStart:string 
                     + "-" + scaleEnd:string + "_" + now:string + ".csv";
  var outputFile = open(outputFilename, ioMode.cw);
  var outputFileWriter = outputFile.writer(locking=false);
  var header = "scale,edgeProcessing,e2v,bfsV,bfsE,bfsVagg,bfsEagg";
  outputFileWriter.writeln(header);

  for val in scaleStart..scaleEnd {
    var timer:stopwatch;
    var SCALE = val;
    var ns = 2**SCALE;
    var ms = 2**SCALE * 16;
    var file = "rmat_" + SCALE:string;
    
    writeln("$"*25);
    writeln("RESULTS FOR RMAT ", SCALE:string, ": ");

    timer.start(); if measureComms then startCommDiagnostics();
    var edgeView = genRMATgraph(0.57,0.19,0.19,0.05,SCALE,ns,ms,2);
    timer.stop(); if measureComms then stopCommDiagnostics();
    var edgeProcessing = timer.elapsed();
    if measureComms { 
      commDiagnosticsToCsv(getCommDiagnostics(), file, "processing");
      resetCommDiagnostics();
    }
    writeln("Creating RMAT graph took: ", edgeProcessing, " secs");
    timer.reset();

    timer.start(); if measureComms then startCommDiagnostics();
    var vertexView = new shared VertexCentricGraph(edgeView);
    timer.stop(); if measureComms then stopCommDiagnostics();
    var edgeToVertex = timer.elapsed();
    if measureComms { 
      commDiagnosticsToCsv(getCommDiagnostics(), file, "e2v");
      resetCommDiagnostics();
    }
    writeln("Creating vertex graph took: ", edgeToVertex, " secs");
    timer.reset();

    var m = edgeView.src.size;
    var n = edgeView.vertexMapper.size;
    writeln("Graph composed of ", m, " edges and ", n, " vertices");

    var runs:[1..trials] real;
    var sources:[1..trials] int;
    fillRandom(sources, edgeView.vertexMapper.first, edgeView.vertexMapper.last);
    
    if measureComms then startCommDiagnostics();
    runBFS(bfsNoAggregationVertex, vertexView, sources, runs);
    if measureComms then stopCommDiagnostics();
    if measureComms { 
      commDiagnosticsToCsv(getCommDiagnostics(), file, "bfsV");
      resetCommDiagnostics();
    }
    var bfsNoAggregationVertexTime = (+ reduce runs) / trials;
    writeln("bfsNoAggregation on vertex graph took: ", 
            bfsNoAggregationVertexTime, " secs");

    if measureComms then startCommDiagnostics();
    runBFS(bfsNoAggregationEdge, edgeView, sources, runs);
    if measureComms then stopCommDiagnostics();
    if measureComms { 
      commDiagnosticsToCsv(getCommDiagnostics(), file, "bfsE");
      resetCommDiagnostics();
    }
    var bfsNoAggregationEdgeTime = (+ reduce runs) / trials;
    writeln("bfsNoAggregation on edge graph took: ", 
            bfsNoAggregationEdgeTime, " secs");
    
    if measureComms then startCommDiagnostics();
    runBFS(bfsAggregationVertex, vertexView, sources, runs);
    if measureComms then stopCommDiagnostics();
    if measureComms { 
      commDiagnosticsToCsv(getCommDiagnostics(), file, "bfsVagg");
      resetCommDiagnostics();
    }
    var bfsAggregationVertexTime = (+ reduce runs) / trials;
    writeln("bfsAggregation on vertex graph took: ", 
            bfsAggregationVertexTime, " secs");
    
    if measureComms then startCommDiagnostics();
    runBFS(bfsAggregationEdge, edgeView, sources, runs);
    if measureComms then stopCommDiagnostics();
    if measureComms { 
      commDiagnosticsToCsv(getCommDiagnostics(), file, "bfsEagg");
      resetCommDiagnostics();
    }
    var bfsAggregationEdgeTime = (+ reduce runs) / trials;
    writeln("bfsAggregation on edge graph took: ", 
            bfsAggregationEdgeTime, " secs");

    writeln();
    var line = "%s,%.4dr,%.4dr,%.4dr,%.4dr,%.4dr,%.4dr,%.4dr".format(
      SCALE,edgeProcessing,edgeToVertex,bfsNoAggregationVertexTime,
      bfsNoAggregationEdgeTime,bfsAggregationVertexTime,bfsAggregationEdgeTime
    );
    outputFileWriter.writeln(line);
  }
}
