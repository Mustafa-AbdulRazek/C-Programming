/*
* program to calc n of cards in the shoe.
* this code is released under the HU public license.
* (c) 2024, fcih-team
*/

#include <stdio.h>

int main() {
   int decks;
   puts("Enter a n of decks");
   scanf("%i", &decks);
   if (decks < 1){
        puts("that is not a valid n of decks.");
        return 1;
   }
   printf("there are %i cards\n", (decks * 52));
   return 0;
}