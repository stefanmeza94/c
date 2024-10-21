#include <stdio.h> 

void main() {
  unsigned char simbol;

  printf("Unesite neku cifru od 1 do 9 i pritsnite ENTER: ");
  scanf(" %c", &simbol);

  printf("Ovo %s cifra!\n", simbol >= '0' && simbol <= '9' ? "jeste" : "nije");
}

// memorijski prostor promenljive