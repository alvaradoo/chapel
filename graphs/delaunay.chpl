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

/*
  Hacky way to output a `.csv` file from the source of 
  `printCommDiagnosticsTable` within the `CommDiagnostics` module.
*/
proc commDiagnosticsToCsv(comms, file, kernel, printEmptyColumns=false) {
  use Reflection, Math;

  var now = dateTime.now();
  var outputFilename = "bfsComm_" + kernel + "_" + numLocales:string + "L_" + 
                       file + "_" + now:string + ".csv";
  var outputFile = open(outputFilename, ioMode.cw);
  var outputFileWriter = outputFile.writer(locking=false);

  // grab all comm diagnostics
  var CommDiags = getCommDiagnostics();

  param unstable = "unstable";

  // cache number of fields and store vector of whether field is active
  param nFields = getNumFields(chpl_commDiagnostics);

  // How wide should the column be for this field?  A negative value
  // indicates an unstable field.  0 indicates that the field should
  // be skipped in the table.
  var fieldWidth: [0..<nFields] int;

  // print column headers while determining which fields are active
  outputFileWriter.writef("%s", "locale");
  for param fieldID in 0..<nFields {
    param name = getFieldName(chpl_commDiagnostics, fieldID);
    var maxval = 0;
    for locID in LocaleSpace do
      maxval = max(maxval, getField(CommDiags[locID], fieldID).safeCast(int));

    if printEmptyColumns || maxval != 0 {
      const width = if commDiagsPrintUnstable == false && name == "amo"
                      then -unstable.size
                      else max(name.size, ceil(log10(maxval+1)):int);
      fieldWidth[fieldID] = width;

      outputFileWriter.writef(",%s", name);
    }
  }
  outputFileWriter.writeln();

  // print a row per locale showing the active fields
  for locID in LocaleSpace {
    outputFileWriter.writef("%s", locID:string);
    for param fieldID in 0..<nFields {
      var width = fieldWidth[fieldID];
      const count = if width < 0 then unstable
                                  else getField(CommDiags[locID],
                                                fieldID):string;
      if width != 0 then
        outputFileWriter.writef(",%s", count);
    }
    outputFileWriter.writeln();
  }
}

proc main() {
  var now = dateTime.now();
  var outputFilename = "bfs_" + numLocales:string + "L_delaunay_n" + start:string 
                     + "-" + end:string + "_" + now:string + ".csv";
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

    timer.start(); if measureComms then startCommDiagnostics();
    var (src, dst, wgt) = matrixMarketFileToArrays(dir+folder+file+ext);
    timer.stop(); if measureComms then stopCommDiagnostics();
    var fileReadingTime = timer.elapsed();
    if measureComms { 
      commDiagnosticsToCsv(getCommDiagnostics(), file, "parsing");
      resetCommDiagnostics();
    }
    writeln("Extracting arrays took: ", fileReadingTime, " secs");
    timer.reset();

    timer.start(); if measureComms then startCommDiagnostics();
    var edgeView = new shared EdgeCentricGraph(src, dst);
    timer.stop(); if measureComms then stopCommDiagnostics();
    var edgeProcessing = timer.elapsed();
    if measureComms { 
      commDiagnosticsToCsv(getCommDiagnostics(), file, "processing");
      resetCommDiagnostics();
    }
    writeln("Creating edge graph took: ", edgeProcessing, " secs");
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
      file,fileReadingTime,edgeProcessing,edgeToVertex,bfsNoAggregationVertexTime,
      bfsNoAggregationEdgeTime,bfsAggregationVertexTime,bfsAggregationEdgeTime
    );
    outputFileWriter.writeln(line);
  }
}
