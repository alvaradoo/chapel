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
                    nEDGES:int, maxEweight:int) {
    const vRange = 1..nVERTICES,
          eRange = 1..nEDGES,
          rRange = 1..nEDGES+1;

    var randGen = new randomStream(real);

    var noisyA = blockDist.createArray({eRange}, real),
        noisyB = blockDist.createArray({eRange}, real),
        noisyC = blockDist.createArray({eRange}, real),
        noisyD = blockDist.createArray({eRange}, real),
        norm = blockDist.createArray({eRange}, real),
        unifRandom = blockDist.createArray({eRange}, real),
        edges = blockDist.createArray({eRange}, (int,int));

    edges = (1,1);
    var bit = 1 << SCALE;
    var skip:real;

    for d in 1..SCALE {
      bit >>= 1;
      writeln("$$$$$ EXECUTING GENERATION FOR SCALE ", d, " WITH BIT ", bit, ":");

      skip = randGen.next();
      randGen.fill(unifRandom);
      noisyA = a * (0.95 + 0.1 * unifRandom);
      writeln(noisyA);

      skip = randGen.next();
      randGen.fill(unifRandom);
      noisyB = b * (0.95 + 0.1 * unifRandom);
      writeln(noisyB);

      skip = randGen.next();
      randGen.fill(unifRandom);
      noisyC = c * (0.95 + 0.1 * unifRandom);
      writeln(noisyC);

      skip = randGen.next();
      randGen.fill(unifRandom);
      noisyD = d * (0.95 + 0.1 * unifRandom);
      writeln(noisyD);

      norm = 1.0 / (noisyA + noisyB + noisyC + noisyD);
      noisyA *= norm; 
      noisyB *= norm; 
      noisyC *= norm; 
      noisyD *= norm;

      skip = randGen.next();
      randGen.fill(unifRandom);

      edges += assignQuadrant(unifRandom, noisyA, noisyB, noisyC, noisyD, bit);
      writeln(edges);
      writeln();
    }

    var permutation = blockDist.createArray({vRange}, int);
    permutation = vRange;
    writeln(permutation);
    
    var eWeights = blockDist.createArray({eRange}, int);
    randGen.fill(unifRandom);
    eWeights = floor(1 + unifRandom * maxEweight):int;
    writeln(eWeights);
    
    randGen.fill(unifRandom[vRange]);
    writeln(unifRandom);

    for v in vRange { // can be forall?
      // loop will NOT be distributed.
      var newID = floor(1 + unifRandom[v] * nVERTICES):int;
      permutation[v] <=> permutation [newID];
    }
    writeln(permutation);

    var vCount = blockDist.createArray({vRange}, int);
    vCount = 0;
    writeln(vCount);

    for e in eRange { // can be forall?
      // loop will NOT be distributed.
      edges[e][0] = permutation(edges[e][0]);
      edges[e][1] = permutation(edges[e][1]);
    }
    writeln(edges);

    var src = blockDist.createArray({eRange}, int);
    var dst = blockDist.createArray({eRange}, int);

    forall (e,s,d) in zip(edges,src,dst) { s = e[0]; d = e[1]; }

    writeln(src);
    writeln(dst);
  }
}