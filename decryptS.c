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
//   input = fopen("input.txt", "r");
//   while ((x = getc(input)) != EOF) {
//       if (x >= 65 && x <= 90) {
//       while (getc(key) != x) {
//          count += 1;
//      }
//    x = 65 + count;
//        }
//    fprintf( ofile,"%c", x);
//    count = 0;
//    fseek(key, 0, SEEK_SET);  
//   }
//   
//   fclose(ofile);
//}