#include <stdio.h>



int main(void)
{
    int option;
    printf("Select an option from 1 to 6\n 1.  Encryption with rotation cipher given message text and rotation amount\n 2. Decryption with rotation cipher given cipher text and rotation amount\n 3. Encryption with a substitution cipher given message text and alphabet substitution\n 4. Decryption of a message encrypted with a substitution cipher given cipher text and substitutions\n 5.  Decryption of a message encrypted with a rotation cipher given cipher text only\n 6.  Decryption of a message encrypted with a substitution cipher given cipher text only" );
    scanf("%d", &option);
    switch(%d) {
        case 1: encrypR()
        break;
        case 2: decrypR()
        break;
        case 3: encrypS()
        break;
        case 4: decrypS()
        break;
        case 5: decrypRA()
        break;
        case 6: decrypSA()
        break;
        default: printf("Please enter a number between 1 and 6");
}
}

