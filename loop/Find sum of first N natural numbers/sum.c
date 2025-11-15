#include <stdio.h>
void main()
 {
    int n;
    int sum=0;
        printf("Enter a number: ");
        scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    printf("Sum of first %d natural number is %d\n", n, sum);
}