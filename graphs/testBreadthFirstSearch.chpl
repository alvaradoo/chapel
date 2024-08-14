use Graph;
use Random;
use Search;
use Generator;
use Aggregators;
use EdgeCentricGraph;
use VertexCentricGraph;
use BreadthFirstSearch;

config const lowerSCALE = 1;
config const upperSCALE = 10;
config const eFACTOR = 16;
config const trials = 5;
var globalCheck:bool = true;

for SCALE in lowerSCALE..upperSCALE {
  var ns = 2**SCALE;
  var ms = 2**SCALE * eFACTOR;
  var edgeView = genRMATgraph(0.57,0.19,0.19,0.05,SCALE,ns,ms,2);
  var vertexView = new shared VertexCentricGraph(edgeView);

  var sourcesIdx:[1..trials] int;
  fillRandom(sourcesIdx, edgeView.vertexMapper.domain.first, 
                      edgeView.vertexMapper.domain.last);
  
  var final:bool;
  for s in sourcesIdx {
    var parentVertex = bfsParentVertexAgg(toGraph(vertexView), s);
    var parentVertexRolinger = bfsParentVertexRolinger(toGraph(vertexView), s);
    var parentVertexJenkins = bfsParentVertexJenkins(toGraph(vertexView), s);
    var levelVertex = bfsLevelVertexAgg(toGraph(vertexView), s);

    var p2LVertex = parentToLevel(parentVertex,s);
    var p2LRolinger = parentToLevel(parentVertexRolinger,s);
    var p2LJenkins = parentToLevel(parentVertexJenkins,s);
    
    var check1 = && reduce (p2LVertex == levelVertex);
    var check2 = && reduce (p2LRolinger == levelVertex);
    var check3 = && reduce (p2LJenkins == levelVertex);

    final = globalCheck && check1 && check2 && check3;
  }
  writeln("All levels match for SCALE ", SCALE, " RMAT graph: ", final);
}
