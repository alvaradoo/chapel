// AUTO-GENERATED: Do not edit
class A {}
class Parent {}
class Child : Parent {}
proc foo() {
  // coercing from unmanaged Child to borrowed Parent?
  var a = new unmanaged Child();
  var allocTo = new owned Parent?();
  var a_:borrowed Parent? = allocTo;
  a_ = a;
}
proc main() {
  foo();
}
