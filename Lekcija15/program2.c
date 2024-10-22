#include <stdio.h>

void popuniNiz(double *niz, int brojElemenata) {
  for (int i = 0; i < brojElemenata; i++) {
    printf("Unesite %d. broj: ", i + 1);
    scanf("%lf", &niz[i]);
  }
}

void prikaziNiz(double *niz, int brojElemenata) {
  for(int i = 0; i < brojElemenata; i++) {
    printf("%3d. Element = %.4f.\n", i + 1, niz[i]);
  }
}

void main() {
  double niz[10];

  // prosledjivanje po referenci, kad prosledimo ovako niz sam po sebi on vec pokazuje ka svom PRVOM elementu, pa u odnosu na njega pristupo dalje svim elementima u popuniNiz funkciji, zato je uvek dobra praksa da prosledimo i koliko elemenata ima niz da bi znali kolko mozemo da se krecemo na dalje u nizu.
  popuniNiz(niz, 10);
  prikaziNiz(niz, 10);
}
