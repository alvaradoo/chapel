use CSV, IO;

config const filename = "strings.csv";

var reader = openReader(filename);
var r = new CSVIO(reader, sep=" ", hasHeader=true);

var A = r.read(string);

writeln(A.domain);
writeln(A);
