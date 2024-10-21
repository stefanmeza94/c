#include <stdio.h>

void main() {
  int a = 42;
  int b = 3;
  int c = -7;
  float d = -6.99999999  ;
  unsigned char e;

  e = a <= b || c != d && c < b;

  printf("Rezultat dela a <= b je %u. \n", a <= b);
  printf("Rezultat dela c != d je %u. \n", c != d);
  printf("Rezultat dela c < b je %u. \n", c < b);

  printf("Konacni rezultat je %u.\n", e);
}

// 020 - Uslovno granjanje