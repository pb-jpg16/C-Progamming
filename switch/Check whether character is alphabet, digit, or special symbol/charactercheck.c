#include <stdio.h>
void main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (1) {
        case 1:
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                printf("%c is an alphabet.", ch);
                break;
            }
        case 2:
            if (ch >= '0' && ch <= '9') {
                printf("%c is a digit.", ch);
                break;
            }
        default:
            printf("%c is a special symbol.", ch);
    }
}