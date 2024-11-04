#include <stdio.h>
#include <string.h>

typedef struct {
  char ime[50];
  double cena;
  double kolicina;
} Stavka;

void stampajStavku(Stavka s) {
  printf("%-40s %16.2f RSD x %12.2f = %12.2f RSD\n", s.ime, s.cena, s.kolicina, (s.cena) * (s.kolicina));

  s.kolicina = 100;
}

void popuniStavkuPrviNacin(Stavka *s, char *ime, double cena, double kolicina) {
  strcpy(s->ime, ime);
  s->cena = cena;
  s->kolicina = kolicina;
}

void popuniStavkuDrugiNacin(Stavka *s, char *ime, double cena, double kolicina) {
  strcpy((*s).ime, ime);
  (*s).cena = cena;
  (*s).kolicina = kolicina;
}

void main() {
  Stavka s1, s2;

  // prosledjivanje stavke po referenci, funkcije rade potpuno istu stvar, samo na dva razlicita nacina kada radimo sa pokazivacima sa strukturama.
  popuniStavkuPrviNacin(&s1, "Tastatura MK3401-MKK1", 1200, 3);
  popuniStavkuDrugiNacin(&s2, "Kokice slane (na 100gr)", 45.67, 2.3);

  stampajStavku(s1);
  stampajStavku(s2);

  printf("%10.2f\n", s1.kolicina);
}

//  038 - Programski jezik C - Formatiranje stringova
        