// AUTO-GENERATED: Do not edit
class A {}
class Parent {}
class Child : Parent {}
// coercing from unmanaged A to unmanaged A
proc bar(const ref x: unmanaged A) {}
proc foo() {
  var a = new unmanaged A();
  bar(a);
}
proc main() {
  foo();
}
