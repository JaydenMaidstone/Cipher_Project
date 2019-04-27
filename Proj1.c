#include <stdio.h>
#include <stdlib.h>

void encryptR();
void decryptR();
void encryptS();
void decryptS();
void decryptRA();
void decryptSA();

int main(void)
{
    int option;
    printf("Select an option from 1 to 6\n 1.  Encryption with rotation cipher given message text and rotation amount\n 2.  Decryption with rotation cipher given cipher text and rotation amount\n 3.  Encryption with a substitution cipher given message text and alphabet substitution\n 4.  Decryption of a message encrypted with a substitution cipher given cipher text and substitutions\n 5.  Decryption of a message encrypted with a rotation cipher given cipher text only\n 6.  Decryption of a message encrypted with a substitution cipher given cipher text only" );
    scanf("%d", &option);
    switch(option) {
        case 1: encryptR();
        break;
        case 2: decryptR();
        break;
//        case 3: encryptS();
//        break;
//        case 4: decryptS();
//        break;
        case 5: decryptRA();
        break;
//        case 6: decryptSA();
//        break; 
        default: printf("Please enter a number between 1 and 6");
}
}

void encryptR() {
    
    FILE *ofile;
    ofile = fopen("output.txt", "w");
    int key = 5;
   FILE *input;
   char x;
   input = fopen("encrypt_input.txt", "r");
   while ((x = getc(input)) != EOF) {
       if (x != 32) {
      x = (x - 65 + key)%26 + 65;
  }

        fprintf( ofile,"%c", x);
   }
   
   fclose(ofile);
   
}


void decryptR() {
    
    FILE *ofile;
    ofile = fopen("output.txt", "w");
    int key = 5;
   FILE *input;
   char x;
   input = fopen("decrypt_input.txt", "r");
   while ((x = getc(input)) != EOF) {
       
      if( x != 32) {
        x = x - key;
            if (x < 65) {
                x = x + 26;
            }
        }
     fprintf( ofile,"%c", x);
   }
   
   fclose(ofile);
}
    
   void decryptRA() {
       
    FILE *ofile;
    ofile = fopen("output.txt", "w");
    int key = 0;
    FILE *input;
    char x;
    while ( key < 26) {
    input = fopen("decrypt_input.txt", "r");
    while ((x = getc(input)) != EOF) {
       
        if( x != 32) {
            x = x - key;
                if (x < 65) {
                    x = x + 26;
                }
        }
    fprintf( ofile,"%c", x);
   }
   fprintf( ofile, "\n");
   key += 1;
   }
   
}
