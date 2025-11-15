#include <stdio.h>
void main()
 {
    int n;
    int s=0;
        printf("Enter a number: ");
        scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        s+=i*i*i;
    }
    printf("Sum of cubeof  first %d natural number is %d\n", n, s);
}