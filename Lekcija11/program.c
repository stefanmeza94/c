#include <stdio.h>

void main() {
  int broj;

  while (1) {
    printf("Pogodite tajni broj: ");
    scanf("%d", &broj);

    if (broj == 54) {
      printf("Pogodili ste tajni broj!\n");
      break;
    }
  }

  printf("Kraj programa!");
}