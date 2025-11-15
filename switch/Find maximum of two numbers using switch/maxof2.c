#include <stdio.h>
void main() 
{
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (a > b) {
        case 1:
            max = a;
            break;
        case 0:
            max = b;
            break;
    }

    printf("Maximum is: %d\n", max);
}