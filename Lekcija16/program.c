#include <stdio.h>
#include <string.h>

void ukloniNoviRed(char *niz) {
    niz[strlen(niz) - 1] = '\0';
}

void main() {
    char ime[50];
    char prezime[50];

    printf("Unesite svoje ime: ");
    // fgets funkcija ce da uhvati ceo tekstualni podatak koji smo ukucali, ali ce da zapamti i novi red prilikom pritiska na enter da bi korisnik potvrdio rec koju je odkucao.
    fgets(ime, sizeof(ime), stdin);
    // uklanjanje novog reda
    ukloniNoviRed(ime);

    printf("Unesite svoje prezime: ");
    fgets(prezime, sizeof(prezime), stdin);
    // uklanjanje novog reda
    ukloniNoviRed(prezime);

    if (strlen(ime) == 0 || strlen(prezime) == 0) {
        printf("Ime ili prezime nisu ispravno uneti.\n");
    } else {
        printf("Puno ime i prezime: %s %s.", ime, prezime); 
    }

}