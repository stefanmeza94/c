#include <stdio.h>

void popuniDimenzijeKvadra(float *a, float *b, float *c) {
    printf("Unesite sirinu kvadra: ");
    // adresa u memoriji ka kojoj pokazuje pokazivac a ce sada u sebi sadrzati vrednost koju smo uneli za sirinu kvadra!
    scanf("%f", a);

    printf("Unesite duzinu kvadra: ");
    // adresa u memoriji ka kojoj pokazuje pokazivac b ce sada u sebi sadrzati vrednost koju smo uneli za duzinu kvadra!
    scanf("%f", b);

    printf("Unesite visinu kvadra: ");
    // adresa u memoriji ka kojoj pokazuje pokazivac c ce sada u sebi sadrzati vrednost koju smo uneli za visinu kvadra!
    scanf("%f", c);
}

// ova funkcija uzima a,b,c argumente proslednje po vrednosti dok su o i p su argumenti prosledjeni po referenci
void izracunajIPopuniObimIPovrsinu(float a, float b, float c, float *o, float *p) {
    *p = a * b * c;
    *o = 2 * (a + b + c);
}

void main() {
    float a, b, c, o, p;

    // stavljamo & znak zato sto radimo sa prosledjivanjem vrednosti po referencama, dakle prosledjujemo adresu u memoriji a, b i c promenljive!
    popuniDimenzijeKvadra(&a, &b, &c);

    izracunajIPopuniObimIPovrsinu(a, b, c, &o, &p);

    printf("Povrsina je %.2f, a obim je %.2f.\n", p, o);
}

// oblast vidljivosti promenljive