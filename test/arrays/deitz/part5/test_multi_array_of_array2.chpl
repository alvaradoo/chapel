var A: [1..2, 1..3] [1..4, 1..5] int;
[(i,j,k,l) in {1..2, 1..3, 1..4, 1..5} with (ref A)] A(i,j)(k,l) = i*1000+j*100+k*10+l;
writeln(A);
