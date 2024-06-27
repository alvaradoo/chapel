use VertexCentricGraph;
use EdgeCentricGraph;
use Random;
use BlockDist;
use Time;
use BreadthFirstSearch;
use Utils;

config var m = 1_000;
config var n =   100;
config const filename = "";
var timer:stopwatch;

var (source, destination) = gnp(n, m);

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

// writeln();
// for u in edgeGraphView.neighbors(0) do write(u, " ");
// writeln();
// for u in vertexGraphView.neighbors(0) do write(u, " ");
// writeln("\n");

// writeln(
//   && reduce 
//   (bfsNoAggregation(edgeGraphView, 1) == bfsNoAggregation(vertexGraphView, 1))
// );
// writeln(
//   && reduce (
//     bfsNoAggregation(edgeGraphView, 1, true)[0]
//     ==
//     bfsNoAggregation(vertexGraphView, 1, true)[0]
//   )
// );
// writeln();

// writeln(
//   && reduce 
//   (bfsAggregationEdge(edgeGraphView, 1) == bfsAggregationVertex(vertexGraphView, 1))
// );
// writeln(
//   && reduce (
//     bfsAggregationEdge(edgeGraphView, 1, true)[0]
//     ==
//     bfsAggregationVertex(vertexGraphView, 1, true)[0]
//   )
// );
// writeln();

if !filename.isEmpty() {
  timer.start();
  var (src, dst, wgt) = matrixMarketFileToArrays(filename);
  timer.stop();
  writeln("Extracting arrays from .mtx file took: ", timer.elapsed(), " secs");
  timer.reset();

  timer.start();
  var edgeView = new shared EdgeCentricGraph(src, dst);
  timer.stop();
  writeln("Creating edge graph from .mtx arrays took: ", timer.elapsed(), " secs");
  timer.reset();

  timer.start();
  var vertexView = new shared VertexCentricGraph(edgeView);
  timer.stop();
  writeln("Creating vertex graph from .mtx arrays took: ", timer.elapsed(), " secs");
  timer.reset();

  writeln("Graph composed of ", edgeView.src.size, " edges and ", edgeView.vertexMapper.size, " vertices");
}

// writeln("bfs 1 = ", bfsAggregationEdge(karateEdgeView, 1));
// writeln("bfs 2 = ", bfsAggregationVertex(karateVertexView, 1));
// writeln("bfs 3 = ", bfsNoAggregation(karateEdgeView, 1));
// writeln("bfs 4 = ", bfsNoAggregation(karateVertexView, 1));
