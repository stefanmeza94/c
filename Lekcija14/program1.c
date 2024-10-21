#include <stdio.h>

// primer globalnog opsega

int podatak;

void test() {
  printf("test: Podatak je %d\n", podatak);
  podatak = 42;
  printf("test: Podataka je %d\n", podatak);
}

void main() {
  podatak = 10;
  printf("main: Podatak je %d\n", podatak);
  test();
  printf("main: Podatak je %d\n", podatak);
}