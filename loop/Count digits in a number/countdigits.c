#include <stdio.h>
void main()
 {
    int n,c=0;
        printf("Enter a number: ");
        scanf("%d", &n);
    while(n!=0)
    {
        c++;
        n=n/10;
    }
    printf(" Number of digit is %d\n", c);
}