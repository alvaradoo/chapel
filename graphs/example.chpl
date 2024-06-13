use VertexCentricGraph;
use EdgeCentricGraph;
use Random;
use BlockDist;
use Time;

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
writeln();
