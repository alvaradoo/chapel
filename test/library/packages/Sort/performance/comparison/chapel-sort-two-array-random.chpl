// chpl --fast chapel-sort-two-array-random.chpl

use Sort;
use Time;
use Random;

config const n = 128*1024*1024;

proc main() {
  var A:[1..n] uint;

  fillRandom(A);

  var timer:stopwatch;
  timer.start();
  TwoArrayRadixSort.twoArrayRadixSort(A);
  timer.stop();

  writeln("Sorted ", n, " elements in ", timer.elapsed(), " seconds");
  writeln(8*n/timer.elapsed()/1024.0/1024.0, " MiB/s");
  writeln(8*n/timer.elapsed()/1000.0/1000.0, " MB/s");
}
