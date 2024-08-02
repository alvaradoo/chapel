use Graph;
use Random;
use Search;
use Generator;
use Aggregators;
use EdgeCentricGraph;
use VertexCentricGraph;
use BreadthFirstSearch;

const lowerSCALE = 1;
const upperSCALE = 10;
const eFACTOR = 16;
const trials = 5;
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
    var parentEdge = bfsParentEdgeAgg(toGraph(edgeView), s);
    var levelVertex = bfsLevelVertexAgg(toGraph(vertexView), s);
    var levelEdge = bfsLevelEdgeAgg(toGraph(edgeView), s);

    var p2LVertex = parentToLevel(parentVertex,s);
    var p2LEdge = parentToLevel(parentEdge,s);
    
    var check1 = && reduce (p2LVertex == levelVertex);
    var check2 = && reduce (p2LEdge == levelVertex);
    var check3 = && reduce (levelEdge == levelVertex);
    final = globalCheck && check1 && check2 && check3;
  }
  writeln("All levels match for SCALE ", SCALE, " RMAT graph: ", final);
}
