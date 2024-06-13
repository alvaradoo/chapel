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

writeln(edgeGraphDist.source);
writeln(edgeGraphDist.destination);
writeln(edgeGraphDist.vertices);
writeln(edgeGraphDist.segments);
writeln();
writeln(edgeGraph.source);
writeln(edgeGraph.destination);
writeln(edgeGraph.vertices);
writeln(edgeGraph.segments);
writeln();
for u in edgeGraphDist.neighbors(0) do write(u, " ");
writeln();
for u in edgeGraph.neighbors(0) do write(u, " ");
writeln();
for u in vertexGraphDist.neighbors(0) do write(u, " ");
writeln();
for u in vertexGraph.neighbors(0) do write(u, " ");
