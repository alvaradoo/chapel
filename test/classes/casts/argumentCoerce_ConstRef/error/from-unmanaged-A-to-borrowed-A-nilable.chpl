// AUTO-GENERATED: Do not edit
class A {}
class Parent {}
class Child : Parent {}
// coercing from unmanaged A to borrowed A?
proc bar(const ref x: borrowed A?) {}
proc foo() {
  var a = new unmanaged A();
  bar(a);
}
proc main() {
  foo();
}
