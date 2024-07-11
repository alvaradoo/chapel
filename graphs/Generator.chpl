/*
  Contains functionality for generating RMAT graphs. These graphs follow a 
  power law distribution which means that a vertex or small subsets of vertices
  have a degree that is proportional to the power of degree of another vertex.
  This type of distribution is what is often found in real-world graphs.
*/
module Generator {
  use Random;
  use BlockDist;
  use EdgeCentricGraph;
  
  proc assignQuadrant(u:real, a:real, b:real, c:real, d:real, bit:int):(int,int)
  {
    var start, end, doNothing = 0;

    if u <= a then doNothing += 1;
    else if u <= a+b then end = 1;
    else if u <= a+b+c then start = 1;
    else { start = 1; end = 1; }

    return (bit*start, bit*end);
  }

  proc genRMATgraph(a:real, b:real, c:real, d:real, SCALE:int, nVERTICES:int,
                    nEDGES:int, maxEweight:int, genNoise:bool = false) {
    const vRange = 1..nVERTICES,
          eRange = 1..nEDGES,
          rRange = 1..nEDGES+1;

    var randGen = new randomStream(real);

    var A = blockDist.createArray({eRange}, real),
        B = blockDist.createArray({eRange}, real),
        C = blockDist.createArray({eRange}, real),
        D = blockDist.createArray({eRange}, real),
        norm = blockDist.createArray({eRange}, real),
        unifRandom = blockDist.createArray({eRange}, real),
        edges = blockDist.createArray({eRange}, (int,int));

    edges = (1,1);
    var bit = 1 << SCALE;
    var skip:real;

    (A, B, C, D) = (a, b, c, d);
    for d in 1..SCALE {
      bit >>= 1;
      writeln("$$$$$ EXECUTING GENERATION FOR SCALE ", d, " WITH BIT ", bit, "...");
      if genNoise {
        skip = randGen.next();
        randGen.fill(unifRandom);
        A = a * (0.95 + 0.1 * unifRandom);

        skip = randGen.next();
        randGen.fill(unifRandom);
        B = b * (0.95 + 0.1 * unifRandom);

        skip = randGen.next();
        randGen.fill(unifRandom);
        C = c * (0.95 + 0.1 * unifRandom);

        skip = randGen.next();
        randGen.fill(unifRandom);
        D = d * (0.95 + 0.1 * unifRandom);

        norm = 1.0 / (A + B + C + D);
        A *= norm; B *= norm; C *= norm; D *= norm;
      }
      skip = randGen.next();
      randGen.fill(unifRandom);
      edges += assignQuadrant(unifRandom, A, B, C, D, bit);
    }

    var permutation = blockDist.createArray({vRange}, int);
    permutation = vRange;
    
    var eWeights = blockDist.createArray({eRange}, int);
    randGen.fill(unifRandom);
    eWeights = floor(1 + unifRandom * maxEweight):int;
    randGen.fill(unifRandom[vRange]);

    for v in vRange { // can be forall?
      // loop will NOT be distributed.
      var newID = floor(1 + unifRandom[v] * nVERTICES):int;
      permutation[v] <=> permutation [newID];
    }

    for e in eRange { // can be forall?
      // loop will NOT be distributed.
      edges[e][0] = permutation[edges[e][0]];
      edges[e][1] = permutation[edges[e][1]];
    }

    var src = blockDist.createArray({eRange}, int);
    var dst = blockDist.createArray({eRange}, int);

    forall (e,s,d) in zip(edges,src,dst) { (s,d) = e; }

    return new shared EdgeCentricGraph(src, dst);
  }
}