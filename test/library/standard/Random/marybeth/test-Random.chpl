proc main() {
  use Random;

  var Vector1 = {1..20};
  var Vec1 : [Vector1] real;

  var rng = new randomStream(real, 314159265);

  rng.fill(Vec1);
  writeln(Vec1);

  fillRandom(Vec1,314159265);
  writeln(Vec1);
  fillRandom(Vec1,314159265);
  writeln(Vec1);
}
