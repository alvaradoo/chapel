class C {
  var a: int = undefined_var;
  var b: int;
}

proc main {
  var c = (new owned C()).borrow();
  writeln(c);
}
