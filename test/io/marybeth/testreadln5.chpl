use IO;

config var inputfile = "test.dat";
var infile:file;
var r = infile.reader(locking=false);

var s = r.readln(string);

writeln(s);

