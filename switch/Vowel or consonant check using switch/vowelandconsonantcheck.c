#include <stdio.h>

void main() {
    char ch;
     
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    ch=toupper(ch);
    switch (ch) {
        
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.", ch);
            break;
        default: if ( ch >= 'A' && ch <= 'Z')
                printf("%c is a consonant.", ch);
                 else
                printf("%c is not an alphabet.", ch);
    }

   
}