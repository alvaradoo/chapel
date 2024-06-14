use VertexCentricGraph;
use EdgeCentricGraph;
use Random;
use BlockDist;

var srcDist = blockDist.createArray({0..10}, int);
var dstDist = blockDist.createArray({0..10}, int);

var src: [0..10] int;
var dst: [0..10] int;

// Test graph building.
srcDist = [0, 1, 2, 3, 4, 5, 6, 6, 7, 8, 9];
dstDist = [0, 2, 3, 4, 5, 6, 7, 7, 8, 9, 9];

src = [0, 1, 2, 3, 4, 5, 6, 6, 7, 8, 9];
dst = [0, 2, 3, 4, 5, 6, 7, 7, 8, 9, 9];

var edgeGraphDist = new shared EdgeCentricGraph(srcDist, dstDist);
var edgeGraph = new shared EdgeCentricGraph(src, dst);

var vertexGraphDist = new shared VertexCentricGraph(edgeGraphDist);
var vertexGraph = new shared VertexCentricGraph(edgeGraph);

writeln(edgeGraphDist.src);
writeln(edgeGraphDist.dst);
writeln(edgeGraphDist.seg);
writeln(edgeGraphDist.vertexMapper);
writeln();
writeln(edgeGraph.src);
writeln(edgeGraph.dst);
writeln(edgeGraph.seg);
writeln(edgeGraph.vertexMapper);
writeln();
for u in edgeGraphDist.neighbors(8) do write(u, " ");
writeln();
for u in edgeGraph.neighbors(8) do write(u, " ");
writeln();
for u in vertexGraphDist.neighbors(8) do write(u, " ");
writeln();
for u in vertexGraph.neighbors(8) do write(u, " ");
writeln();
for u in edgeGraphDist.neighborsInternal(0) do write(u, " ");
writeln();
for u in edgeGraph.neighborsInternal(0) do write(u, " ");
writeln();
for u in vertexGraphDist.neighborsInternal(0) do write(u, " ");
writeln();
for u in vertexGraph.neighborsInternal(0) do write(u, " ");
