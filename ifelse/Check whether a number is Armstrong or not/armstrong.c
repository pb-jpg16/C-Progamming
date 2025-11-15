#include <stdio.h>
#include <math.h>
void main() 
{
    int n, store, temp, no = 0;
    int r = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

   store = n;

   
    while (store != 0)
     {
        store /= 10;
        ++no;
    }

    store = n;


    while (store != 0) {
        temp = store % 10;
        r += pow(temp, no);
        store/= 10;
    }

    if (r == n) 
    {
        printf("%d is an Armstrong number.\n", n);
    } 
    else
    {
        printf("%d is not an Armstrong number.\n", n);
    }
}