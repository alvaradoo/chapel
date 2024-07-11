use Generator;

config const a = 0.57, 
             b = 0.19,
             c = 0.19,
             d = 0.05;
config const SCALE = 16,
             eFACTOR = 16,
             maxEweight = 2;
config const genNoise:bool = false;

const nVERTICES = 2**SCALE;

writeln("Executing without noise...");
var noisyG = genRMATgraph(a, b, c, d, SCALE, nVERTICES, nVERTICES * eFACTOR, maxEweight, genNoise);
writeln();

writeln("Executing with noise...");
var G = genRMATgraph(a, b, c, d, SCALE, nVERTICES, nVERTICES * eFACTOR, maxEweight, !genNoise);
writeln();

writeln("nVERTICES * eFACTOR = ", nVERTICES * eFACTOR);
writeln("Num edges noisyG    = ", noisyG.src.size/2);
writeln("Num edges G         = ", G.src.size/2);
