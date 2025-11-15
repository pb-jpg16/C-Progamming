#include <stdio.h>
void main()
 {
    int n,sum=0;
        printf("Enter a number: ");
        scanf("%d", &n);
    while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    printf("Sum of digit is %d\n", sum);
}