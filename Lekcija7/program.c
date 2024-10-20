#include <stdio.h>

void main() {        //        0        1        2
    double plate[3]; //  [504.12] [409.97] [783.09]

    double *p;

    /* 
        adresa na koju ce sada da upucuje u memoriji nas pokazivac (ne *p, dakle ne vrednost na koju upucuje, ne menjamo vrednost na memorijskoj lokaciji, vec 
        menjamo samu memorijsku lokaciju) menjamo adresu ka kojoj upucuje pokazivac
    */

    // do adrese necega dolazimo tako sto koristimo & znak 
    p = &plate[0];
    printf("Trenutna adresa pokazivaca je %p.\n", p);
    // da bi dosli do vrednosti ka kojoj pokazivac upucuje koristimo *p (samo p je adresa)
    *p = 504.12;

    // pomeramo pokazivac za 8 bajtova (zato sto je deklarisan kao double za koji se u memoriji odvaja 8 bajta);
    // ovo p + 1 znaci da pomeramo pokazivac za jednu svoju sirinu, a njegova sirina je 8 bajtova posto je deklarisan kao double.
    p++; // p = p + 1;
    // u ovom trenutku nas pokazivac pokazuje na drugu platu
    printf("Trenutna adresa pokazivaca je %p.\n", p);
    *p = 490.97;

    p++;
    printf("Trenutna adresa pokazivaca je %p.\n", p);
    *p = 783.09;

    /* 
        na kraju ovog programa naz pokazivac p i dalje pokazuje na treci element naseg niza, ukoliko bi pokusali da pomerimo nas pokazivac za 8 bajtova u memoriji sa p++,
        on bi sada pokazivao na novi deo u memorji koji ne postoji, posto smo mi alocirali u memorji tri mesta za nas niz plate, memorija koja se nalazi odmah iza toga (iza [783.09]) 
        ne pripada nasem programu, nije alocirana nama. Windows nece dozvoliti da nas program pristupi memoriji koja je tudja memorija, koja nije data nasem programu na koriscenje. 
    */

   printf("Vrednost prve plate: %.2f, vrednost druge plate: %.2f i vrednost trece plate: %.2f.\n", plate[0], plate[1], plate[2]);
}

// pokazivaci