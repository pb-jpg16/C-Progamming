#include <stdio.h>
void main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("%d is not a perfect square.", num);
       
    }

    int r = (int)sqrt(num);
    if (r * r == num) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }


}