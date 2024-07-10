use Generator;

config const a = 0.57, 
             b = 0.19,
             c = 0.19,
             d = 0.05;
config const SCALE = 16,
             eFACTOR = 16,
             maxEweight = 2;

const nVERTICES = 2**SCALE;
genRMATgraph(a, b, c, d, SCALE, nVERTICES, nVERTICES * eFACTOR, maxEweight);