#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int key = 0;
   FILE *input;
   char x;
   while ( key < 26) {
   input = fopen("decrypt.txt", "r");
   while ((x = getc(input)) != EOF) {
       
      if( x != 32) {
        x = x - key;
            if (x < 65) {
                x = x + 26;
            }
        }
    printf("%c", x);
   }
   printf("\n");
   key += 1;
   }
   
}