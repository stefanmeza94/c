#include <stdio.h>

void main() {
 int broj;

 printf("Unesite broj koji je deljiv sa 13: ");
 scanf("%d", &broj); 

 if (broj % 13 == 0) {
  printf("Bravo!\n");
 } else {
  printf("Ovaj broj nije deljiv sa 13...\n");
 }
}

// memorijski prostor promenljive