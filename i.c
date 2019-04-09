#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int key = 5;
   FILE *input;
   char x;
   input = fopen("adb.txt", "r");
   while ((x = getc(input)) != EOF) {
      x = (x - 97 + key)%26 + 97;
        printf("%c", x);
   }
   
   
}