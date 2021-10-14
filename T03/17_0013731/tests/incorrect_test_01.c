float argsFunction(int list b, int c, float d) {
  return d - 3;
}

int main () {
  argsFunction(NIL, 4, 6.3, 7);
  argsFunction(NIL, 4);
  argsFunction(12, 13, 14.0);
  argsFunction(NIL, 12.0, 14);
}