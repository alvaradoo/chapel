use VertexCentricGraph;
use EdgeCentricGraph;
use Random;
use BlockDist;
use Time;
use BreadthFirstSearch;
use Utils;

config var m = 1_000;
config var n =   100;
var timer:stopwatch;

var source = blockDist.createArray({0..<m}, int);
var destination = blockDist.createArray({0..<m}, int);

fillRandom(source, 0, n-1);
fillRandom(destination, 0, n-1);

timer.start();
var edgeGraphView = new shared EdgeCentricGraph(source, destination);
timer.stop();
writeln("Creating EdgeCentricGraph took: ", timer.elapsed(), " seconds");
timer.reset();

timer.start();
var vertexGraphView = new shared VertexCentricGraph(edgeGraphView);
timer.stop();
writeln("Creating VertexCentricGraph took: ", timer.elapsed(), " seconds");
timer.reset();

writeln();
for u in edgeGraphView.neighbors(0) do write(u, " ");
writeln();
for u in vertexGraphView.neighbors(0) do write(u, " ");
writeln("\n");

writeln(
  && reduce 
  (bfsNoAggregation(edgeGraphView, 1) == bfsNoAggregation(vertexGraphView, 1))
);
writeln(
  && reduce (
    bfsNoAggregation(edgeGraphView, 1, true)[0]
    ==
    bfsNoAggregation(vertexGraphView, 1, true)[0]
  )
);
writeln();

writeln(
  && reduce 
  (bfsAggregationEdge(edgeGraphView, 1) == bfsAggregationVertex(vertexGraphView, 1))
);
writeln(
  && reduce (
    bfsAggregationEdge(edgeGraphView, 1, true)[0]
    ==
    bfsAggregationVertex(vertexGraphView, 1, true)[0]
  )
);
writeln();

var (src, dst, wgt) = matrixMarketFileToArrays(
  "/Users/alvaraol/Work/data/karate/karate.mtx");
var karateEdgeView = new shared EdgeCentricGraph(src, dst);
var karateVertexView = new shared VertexCentricGraph(karateEdgeView);

writeln("bfs 1 = ", bfsAggregationEdge(karateEdgeView, 1));
writeln("bfs 2 = ", bfsAggregationVertex(karateVertexView, 1));
writeln("bfs 3 = ", bfsNoAggregation(karateEdgeView, 1));
writeln("bfs 4 = ", bfsNoAggregation(karateVertexView, 1));
