#include <stdio.h>

// deklaracija funkcije, vraca double i uzima jedan argment tipa double
double temp_F_u_C(double temp_F);

void main() {
  double izmerena_temperatura_u_F = 94.12;
  double konvertovano_u_C;

  konvertovano_u_C=temp_F_u_C(izmerena_temperatura_u_F);

  printf("%.2f farenhajta iznosi %.2f celzijusa\n",izmerena_temperatura_u_F, konvertovano_u_C);
}

double temp_F_u_C(double temp_F) {
  // double temp_C;
  // temp_C = (temp_F - 32) / 1.8;
  // return temp_C;

  return (temp_F - 32) / 1.8;
}

// datkoteke zaglavlja