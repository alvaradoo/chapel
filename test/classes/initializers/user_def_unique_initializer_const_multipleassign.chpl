

class C {
  const x: int;

  proc init(y, z) {
    // Phase 1
    x = y+z;
    this.complete();
    // Phase 2
    x -= 1; // Should fail, can't modify const fields in Phase 2
  }
}

var c = (new owned C(2, 3)).borrow();

writeln(c.x);
