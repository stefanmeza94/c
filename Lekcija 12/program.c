#include <stdio.h>

void prikaziPorukeDobrodoslice() {
  printf("Dobro nam dosli!\n");
  printf("Ovaj program konvertuje temperature iz *C u *F\n");
  printf("Ispratite uputstva za rad programa\n");
}

float ucitajTemperaturuOdKorisnika() {
  float temperatura;
  printf("Unesite temperaturu u stepenima celzijusa: ");
  scanf("%f", &temperatura);
  return temperatura;
}

float konvertujTemperaturuCuF(float tempC) {
  float farenhajt;
  farenhajt = (1.8 * tempC) + 32;
  return farenhajt;
}

void prikaziTemperaturu(float tempF) {
  printf("Temperatura je %.2f*F\n", tempF);
}

void main() {
  // float tempC, tempF;

  // prikaziPorukeDobrodoslice();
  // tempC = ucitajTemperaturuOdKorisnika();
  // tempF = konvertujTemperaturuCuF(tempC);

  // prikaziTemperaturu(tempF);

  prikaziPorukeDobrodoslice();
  prikaziTemperaturu(konvertujTemperaturuCuF(ucitajTemperaturuOdKorisnika()));
}

