#include <stdio.h>
#include <string.h>

void main() {
    char imeGrada[100];
    char dopunjenoImeGrada[150];
    char tajnoMesto[50];
    char unos[50];
    char *str;

    printf("Unesite ime mesta/grada u kojem ste rodjeni: ");
    gets(imeGrada);

    strcpy(dopunjenoImeGrada, imeGrada);
    strcat(dopunjenoImeGrada, "ic");

    printf("Ime mesta/grada u kojem ste rodjeni je %s?\n", dopunjenoImeGrada);

    strcpy(tajnoMesto, "NEGOTIN");
    
    while(1) {
        printf("Tajno mesto ime %u slova. Kako se ono zove?", strlen(tajnoMesto));
        gets(unos);
        str = strupr(unos);

        if (strcmp(tajnoMesto, unos) == 0) {
            printf("Pogodak!\n");
            break;
        } 
    }   

    str = strlwr(imeGrada);
    if (strstr(imeGrada, "grad") != 0) {
        printf("U nazivu mesta/grada u kojem ste rodjeni postoji deo \"grad\".\n");
    } else {
        printf("U nazivu mesta/grada u kojem ste rodjeni ne postoji deo \"grad\".\n");
    }
}

// 35