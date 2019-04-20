#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int key = 5;
   FILE *input;
   char x;
   input = fopen("decrypt.txt", "r");
   while ((x = getc(input)) != EOF) {
      x = x - key;
      if (x < 65) {
          x = x + 26;
      }
        printf("%c", x);
   }
   
   
}