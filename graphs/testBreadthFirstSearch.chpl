use Graph;
use Random;
use Search;
use Generator;
use Aggregators;
use EdgeCentricGraph;
use VertexCentricGraph;
use BreadthFirstSearch;

const lowerSCALE = 2;
const upperSCALE = 4;
const eFACTOR = 16;

for SCALE in lowerSCALE..upperSCALE {
  var ns = 2**SCALE;
  var ms = 2**SCALE * eFACTOR;
  var edgeView = genRMATgraph(0.57,0.19,0.19,0.05,SCALE,ns,ms,2);
  var vertexView = new shared VertexCentricGraph(edgeView);

  var sourcesIdx:[1..1] int;
  fillRandom(sourcesIdx, edgeView.vertexMapper.domain.first, 
                      edgeView.vertexMapper.domain.last);
  var sources: [sourcesIdx.domain] int;
  for (u,ui) in zip (sources,sourcesIdx) do u = edgeView.vertexMapper[ui];
  
  for s in sources {
    var parentVertex = bfsParentVertexAgg(toGraph(vertexView), s);
    var parentEdge = bfsParentEdgeAgg(toGraph(edgeView), s);
    var levelVertex = bfsLevelVertexAgg(toGraph(vertexView), s);
    var levelEdge = bfsLevelEdgeAgg(toGraph(edgeView), s);

    writeln(parentToLevel(parentVertex,binarySearch(vertexView.vertexMapper,s)[1]));
    writeln(parentToLevel(parentEdge,binarySearch(edgeView.vertexMapper,s)[1]));
    writeln(levelVertex);
    writeln(levelEdge);
    writeln();
  }
}

