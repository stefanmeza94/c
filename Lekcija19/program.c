#include <stdio.h>
#include <string.h>

typedef struct {
  char ime[100];
  double cena;
  double kolicina;
} Stavka;

void stampajStavku(Stavka s) {
  printf("%-40s %12.2f RSD x %12.2f = %12.2f RSD\n", s.ime, s.cena, s.kolicina, (s.cena) * (s.kolicina));

  s.kolicina = 100;
}

void main() {
  Stavka s1, s2;

  strcpy(s1.ime, "Tastatura MK3401-MKK1");
  s1.cena = 1200;
  s1.kolicina = 3;

  strcpy(s2.ime, "Kokice slane (na 100gr)");
  s2.cena = 45.67;
  s2.kolicina = 2.3;

  stampajStavku(s1);
  stampajStavku(s2);

  printf("%10.2f\n", s1.kolicina);
}

// 37 - prosledjivanje strukture podataka po referenci 
