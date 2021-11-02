float complex (int a, float b, int list c) {
  int i;
  for (i = 0; c != NIL && i / 1.15*a < b + ?c; i = i + 1) {
    c = i : c; 
    write(?c);
    writeln(i);
  } 

  return i / 1.15*a;
}

int main () {
  int a;
  int b;
  int list c;

  a = 20.0;
  b = 1;
  c = NIL;
  complex(a, b, c);

  return 0;
}
