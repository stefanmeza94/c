#include <stdio.h>

void main() {
  int a = 42;
  int b = 3 ;
  int c = -7;

  unsigned char d, e;

  d = a < b;
  e = b > c;

  printf("Rezultat d je %d.\n", d);
  printf("Rezultat e je %d.\n", e);
}

// logicke operacije