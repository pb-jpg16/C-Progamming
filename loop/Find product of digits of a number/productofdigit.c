#include <stdio.h>
void main()
 {
    int n,s=1;
        printf("Enter a number: ");
        scanf("%d", &n);
    while(n!=0)
    {
        s=s*n%10;
        n=n/10;
    }
    printf("Product of digit is %d\n", s);
}