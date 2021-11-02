float list list1;

int halfByElem(int a) {
  return 10 / a;
}

int notZero(int b) {
  int c;
  c = 4/-3;
  return b;
}

float functionExpress(float list a) {
  if (a != NIL) {
    return ?a;
  } else {
    return 2.2;
  }
}

int list execList(int list list1) {
  return halfByElem >> notZero << ? % !list1 : NIL;
}

int operators(int a, int b) {
  return (12 - functionExpress(list1)) / 20.0 + 3 * a || b;
}

int main () {
  int a;
  float b;
  a = 20;
  b = 10.1;
  b = a;

  if (a == b) {
    writeln(operators(a, b));
  }

  return 0;
}
