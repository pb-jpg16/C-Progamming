#include <stdio.h>


void main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper((unsigned char)ch)) {
        printf("Uppercase letter");
    } else if (islower((unsigned char)ch)) {
        printf("Lowercase letter");
    } else if (isdigit((unsigned char)ch)) {
        printf("Digit");
    } else {
        printf("Symbol");
    }

 
}