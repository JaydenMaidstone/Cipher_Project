//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//    FILE *ofile;
//    
//    ofile = fopen("output.txt", "w");
//    int key = 0;
//    FILE *input;
//    char x;
//    while ( key < 26) {
//    input = fopen("decrypt_input.txt", "r");
//    while ((x = getc(input)) != EOF) {
//       
//        if( x != 32) {
//            x = x - key;
//                if (x < 65) {
//                    x = x + 26;
//                }
//        }
//    fprintf( ofile,"%c", x);
//   }
//   fprintf( ofile, "\n");
//   key += 1;
//   }
//   
//}