#include <stdio.h>

// primer lokalnog opsega

void test(int podatak) {
  // ovaj argument podatak je zapravo kopija originale promenljive podatak koju smo prosledili unutar main funkcije, sto znaci da je ovaj podatak ovde lokalan za ovu funkciju test, tacnije pravi se kopija originalnog podataka, promenom dole u 42 mi menjamo upravo tu kopiju, a ne orginalnu promenljivu podatak, ovo je prosledjivanje po vrednosti.
  printf("test: 'Podatak je %d\n", podatak);
  podatak = 42;
  printf("test: Podatak je %d\n", podatak);
}

void main() {
  int podatak = 10;

  printf("main: Podataka je %d\n", podatak);
  test(podatak); 

  // kad main funkcija nastavi da se izvrsava posle izvrsavanja test funkcije ona ce ispisitai originalnu vrednost podatka = 10, jer je to lokalna promenljiva za ovu main funkciju.
  printf("main: Podataka je %d\n", podatak);
}