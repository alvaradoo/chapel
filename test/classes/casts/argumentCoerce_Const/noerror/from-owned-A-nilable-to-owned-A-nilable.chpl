// AUTO-GENERATED: Do not edit
class A {}
class Parent {}
class Child : Parent {}
// coercing from owned A? to owned A?
proc bar(const x: owned A?) {}
proc foo() {
  var a = new owned A?();
  bar(a);
}
proc main() {
  foo();
}
