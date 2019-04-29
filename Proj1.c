#include <stdio.h>
#include <stdlib.h>

// program only needs files: input.txt, output.txt, key.txt

void encryptR(); // encyption with rotation
void decryptR(); // decryption with rotation
void encryptS(); // encryption with substitution
void decryptS(); // decryption with substitution
void decryptRA(); // decryption without rotation amount
// void decryptSA();

int main(void)
{
    int option; // switch case to allow the user to choose what task they would like to do
    printf("Select an option from 1 to 6\n 1.  Encryption with rotation cipher given message text and rotation amount\n 2.  Decryption with rotation cipher given cipher text and rotation amount\n 3.  Encryption with a substitution cipher given message text and alphabet substitution\n 4.  Decryption of a message encrypted with a substitution cipher given cipher text and substitutions\n 5.  Decryption of a message encrypted with a rotation cipher given cipher text only\n 6.  Decryption of a message encrypted with a substitution cipher given cipher text only\n" );
    scanf("%d", &option);
    switch(option) {
        case 1: encryptR();
        break;
        case 2: decryptR();
        break;
        case 3: encryptS();
        break;
        case 4: decryptS();
        break;
        case 5: decryptRA();
        break;
//        case 6: decryptSA();
//        break; 
        default: printf("Please enter a number between 1 and 6"); // if an unknown input is given
}
}

void encryptR() { //encryption using a rotation cypher
    
    FILE *ofile;
    ofile = fopen("output.txt", "w");
    int key = 5; //key is set to 5, this can be changed by user
   FILE *input;
   char x;
   input = fopen("input.txt", "r");
   while ((x = getc(input)) != EOF) { 
       if (x >= 65 && x <= 90) { //value collected from input is checked to see if it is a capital letter, if not it is ignored by program
      x = (x - 65 + key)%26 + 65; //65 is taken from x to find position in alphabet, the rotation amount is added
  }

        fprintf( ofile,"%c", x); // printing output to file output.txt
   }
   
   fclose(ofile); //closing file
   
}


void decryptR() {
    
    FILE *ofile;
    ofile = fopen("output.txt", "w");
    int key = 5; //rotation amount
   FILE *input;
   char x;
   input = fopen("input.txt", "r");
   while ((x = getc(input)) != EOF) {
       
      if (x >= 65 && x <= 90) {
        x = x - key;
            if (x < 65) { //this line solves to issue of letter going below A
                x = x + 26;
            }
        }
     fprintf( ofile,"%c", x);
   }
   
   fclose(ofile);
}
    
   void decryptRA() { //decryption attack
       
    FILE *ofile;
    ofile = fopen("output.txt", "w");
    int key = 0;
    FILE *input;
    char x;
    while ( key < 26) { //stops once all rotations have been attempted
    input = fopen("input.txt", "r");
    while ((x = getc(input)) != EOF) {
       
        if (x >= 65 && x <= 90) {
            x = x - key;
                if (x < 65) {
                    x = x + 26;
                }
        }
    fprintf( ofile,"%c", x);
   }
   fprintf( ofile, "\n"); // new line between each decypher attempt
   key += 1; //increment to attempt new rotation amount
   }
   
}



void encryptS() { //encryption with substitution cypher
    
    FILE *ofile;
    FILE *key;
    int count = 0;
    ofile = fopen("output.txt", "w");
    key = fopen("key.txt", "r");
   FILE *input;
   char x;
   char k;
   input = fopen("input.txt", "r");
   while ((x = getc(input)) != EOF) { //while pointer position isnt at end of file
       if (x >= 65 && x <= 90) {
       while (count != (x - 64)) { //loop continous until it has looped the number of times relating to x position is alphabet
          k = getc(key); // each time getc(key) is called, the position of point is incremented
          count += 1; // count is incremented to copy pointer position
      }
    x = k; // x becomes the char at k that corresponds to position of x in alphabet
        }
    fprintf( ofile,"%c", x);
    count = 0; // reset counter
    fseek(key, 0, SEEK_SET);  // set position of pointer back to 0 or start
   }
   
   fclose(ofile);
}


void decryptS()
{
    FILE *ofile;
    FILE *key;
    int count = 0;
    ofile = fopen("output.txt", "w");
    key = fopen("key.txt", "r");
   FILE *input;
   char x;
   input = fopen("input.txt", "r");
   while ((x = getc(input)) != EOF) {
       if (x >= 65 && x <= 90) {
       while (getc(key) != x) { 
          count += 1; // position of x in alphabet is found
      }
    x = 65 + count; //position is added to 65 ( A is ASCII)
        }
    fprintf( ofile,"%c", x);
    count = 0; //reset count 
    fseek(key, 0, SEEK_SET);  // set point position back to 0
   }
   
   fclose(ofile);
}
