#include <stdio.h>

int main() {
    int godina = 2020;
    unsigned int razred = 4;
    float cena = 1654.90;
    double plata = 987.123872;
    char simbol = 'M';

    printf("Unesite godinu rodjenja: ");
    scanf("%d", &godina);

    printf("Unesite koji je minimalni potrebni razred: ");
    scanf("%u", &razred);

    printf("Koja je cena proizvoda? ");
    scanf("%f", &cena);

    printf("Koja je plata zaposlenog? ");
    scanf("%lf", &plata);

    printf("Unesite jedan specijalni simbol: ");
    scanf(" %c", &simbol);

    printf("- - - - - - - - -\n");

    printf("Godina rodjenja je %d. \n", godina);
    printf("Potrebno je da ste zavrsili %u. razred. \n", razred);
    printf("Cena je %.4f EUR.\n", cena);
    printf("Plata zaposlenog je %.2f EUR.\n", plata);
    printf("Specijalni simbol je: %c.\n", simbol);
}

// % unutar stringa "" oznacava indikator formata dok je d indikator da zapis treba da bude u decimalnom formatu. Ceo ovaj deo formata %d se naziva placeholder.