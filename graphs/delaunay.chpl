use Time;
use Random;
use CommDiagnostics;
use IO.FormattedIO;
use IO;

use Graph;
use VertexCentricGraph;
use EdgeCentricGraph;
use BreadthFirstSearch;
use Utils;

config const dir = "/lus/scratch/alvaraol/data/synthetic/delaunay/";
config const start = 10;
config const end = 24;
config const trials = 10;
config const measureComm = false;

proc runBFS(method, graph, sources, ref runs) {
  var timer:stopwatch;
  for i in 1..trials {
    timer.start();
    var noAggBfsEdge = method(graph:shared Graph, sources[i]);
    timer.stop();
    runs[i] = timer.elapsed();
    timer.reset();
  }
  return runs;
}

proc main() {
  var now = dateTime.now();
  var outputFilename = "bfs_delaunay_n" + start:string + "-" + end:string + "_" +
                      now:string + ".csv";
  var outputFile = open(outputFilename, ioMode.cw);
  var outputFileWriter = outputFile.writer(locking=false);

  var header = "filename,parsing,edgeProcessing,e2v,bfsV,bfsE,bfsVagg,bfsEagg";
  outputFileWriter.writeln(header);

  for val in start..end {
    var timer:stopwatch;
    var folder = "delaunay_n" + val:string + "/";
    var file = "delaunay_n" + val:string;
    var ext = ".mtx";
    
    writeln("$"*25);
    writeln("RESULTS FOR ", file.toUpper(), ": ");

    timer.start();
    var (src, dst, wgt) = matrixMarketFileToArrays(dir+folder+file+ext);
    timer.stop();
    var fileReadingTime = timer.elapsed();
    writeln("Extracting arrays took: ", fileReadingTime, " secs");
    timer.reset();

    timer.start();
    var edgeView = new shared EdgeCentricGraph(src, dst);
    timer.stop();
    var edgeProcessing = timer.elapsed();
    writeln("Creating edge graph took: ", edgeProcessing, " secs");
    timer.reset();

    timer.start();
    var vertexView = new shared VertexCentricGraph(edgeView);
    timer.stop();
    var edgeToVertex = timer.elapsed();
    writeln("Creating vertex graph took: ", edgeToVertex, " secs");
    timer.reset();

    var m = edgeView.src.size;
    var n = edgeView.vertexMapper.size;
    writeln("Graph composed of ", m, " edges and ", n, " vertices");

    var runs:[1..trials] real;
    var sources:[1..trials] int;
    fillRandom(sources, edgeView.vertexMapper.first, edgeView.vertexMapper.last);
    
    runBFS(bfsNoAggregationVertex, vertexView, sources, runs);
    var bfsNoAggregationVertexTime = (+ reduce runs) / trials;
    writeln("bfsNoAggregation on vertex graph took: ", 
            bfsNoAggregationVertexTime, " secs");
    
    for i in 1..trials {
      timer.start();
      var noAggBfsEdge = bfsNoAggregationEdge(edgeView:shared Graph, sources[i]);
      timer.stop();
      runs[i] = timer.elapsed();
      timer.reset();
    }
    var bfsNoAggregationEdgeTime = (+ reduce runs) / trials;
    writeln("bfsNoAggregation on edge graph took: ", 
            bfsNoAggregationEdgeTime, " secs");
    
    for i in 1..trials {
      timer.start();
      var aggBfsVertex = bfsAggregationVertex(vertexView, sources[i]);
      timer.stop();
      runs[i] = timer.elapsed();
      timer.reset();
    }
    var bfsAggregationVertexTime = (+ reduce runs) / trials;
    writeln("bfsAggregation on vertex graph took: ", 
            bfsAggregationVertexTime, " secs");
    
    for i in 1..trials {
      timer.start();
      var aggBfsEdge = bfsAggregationEdge(edgeView, sources[i]);
      timer.stop();
      runs[i] = timer.elapsed();
      timer.reset();
    }
    var bfsAggregationEdgeTime = (+ reduce runs) / trials;
    writeln("bfsAggregation on edge graph took: ", 
            bfsAggregationEdgeTime, " secs");

    writeln();
    var line = "%s,%.4dr,%.4dr,%.4dr,%.4dr,%.4dr,%.4dr,%.4dr".format(
      file,fileReadingTime,edgeProcessing,edgeToVertex,bfsNoAggregationVertexTime,
      bfsNoAggregationEdgeTime,bfsAggregationVertexTime,bfsAggregationEdgeTime
    );
    outputFileWriter.writeln(line);
  }
}
