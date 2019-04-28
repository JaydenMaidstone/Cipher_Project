#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *ofile;
    FILE *key;
    int count = 0;
    ofile = fopen("output.txt", "w");
    key = fopen("key.txt", "r");
   FILE *input;
   char x;
   char k;
   input = fopen("encrypt_input.txt", "r");
   while ((x = getc(input)) != EOF) {
       fprintf( ofile,"%c", x);
      // nextChar = 0;
       while (count != (x - 64)) {
          k = getc(key);
          count = count + 1;
          fprintf( ofile,"%c", k);
      }
//    x = k;
    fprintf( ofile,"%c", x);
    count = 0;
   }
   
   fclose(ofile);
}