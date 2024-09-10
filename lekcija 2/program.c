#include <stdio.h>

void main() {
    int ocena1, ocena2, ocena3;
    float rezultat = 0;

    ocena1 = 7;
    ocena2 = 9;
    ocena3 = 7;

    // rezultat = ocena1 + ocena2 + ocena3

    rezultat += ocena1;
    rezultat += ocena2;
    rezultat += ocena3;
    rezultat /= 3;

   printf("Prosecna ocena je %.2f", rezultat);
}

// poredjenje