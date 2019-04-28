//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//    FILE *ofile;
//    FILE *key;
//    int count = 0;
//    ofile = fopen("output.txt", "w");
//    key = fopen("key.txt", "r");
//   FILE *input;
//   char x;
//   char k;
//   input = fopen("encrypt_input.txt", "r");
//   while ((x = getc(input)) != EOF) {
//       if (x >= 65 && x <= 90) {
//       while (count != (x - 64)) {
//          k = getc(key);
//          count += 1;
//      }
//    x = k;
//        }
//    fprintf( ofile,"%c", x);
//    count = 0;
//    fseek(key, 0, SEEK_SET);  
//   }
//   
//   fclose(ofile);
//}