use CTypes;
// Tests having a string field
// Note: c_offsetof is intended for use in C interoperability only.
record Test {
  var x : c_ptrConst(c_char) = "blahblahblahblah";
  var y : int;

}

writeln(c_offsetof(Test,"x"));
writeln(c_offsetof(Test,"y"));
