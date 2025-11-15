#include <stdio.h>
void main() 
{
    int num;
    printf("Enter an positive integer: ");
    scanf("%d", &num);

    switch (num % 2) 
    {
        case 0:
            printf("%d is even.\n", num);
            break;
        case 1:
            printf("%d is odd.\n", num);
            break;
        default:
            printf("Unexpected error.\n");
    }

   
}