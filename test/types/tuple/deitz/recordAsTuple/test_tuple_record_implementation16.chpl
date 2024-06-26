record mytuple : writeSerializable {
  type t1;
  type t2;
  var f1 : t1;
  var f2 : t2;
  proc ref this(param i : int) ref where i == 1 {
    return f1;
  }
  proc ref this(param i : int) ref where i == 2 {
    return f2;
  }
}

proc mytuple.serialize(writer, ref serializer) throws {
  writer.write("(", f1, ", ", f2, ")");
}

var t : mytuple(int, real);

t(1) = 12;
t(2) = 14.0;

writeln(t);
