#include <stdio.h>

void main() {
  double brojevi[5];
  double suma = 0;
  double srednjaVrednost;
  int brojElemenata = sizeof(brojevi) / sizeof(double);

  for (int indeks = 0; indeks < brojElemenata; indeks += 1) {
    printf("Unesite %d. broj: ", indeks + 1);
    scanf("%lf", &brojevi[indeks]);
  }

  for (int i = 0; i < brojElemenata; i++) {
    suma += brojevi[i];
  }

  srednjaVrednost = suma / brojElemenata;
  printf("Srednja vrednost je %f.\n", srednjaVrednost);
}

