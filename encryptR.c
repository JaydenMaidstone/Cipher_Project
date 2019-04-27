//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//    FILE *ofile;
//    
//    ofile = fopen("output.txt", "w");
//    int key = 5;
//   FILE *input;
//   char x;
//   input = fopen("encrypt_input.txt", "r");
//   while ((x = getc(input)) != EOF) {
//       if (x != 32) {
//      x = (x - 65 + key)%26 + 65;
//  }
//
//        fprintf( ofile,"%c", x);
//   }
//   
//   fclose(ofile);
//   
//}