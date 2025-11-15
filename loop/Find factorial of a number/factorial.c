#include <stdio.h>
void main()
 {
    int n, nu=1;
    printf("Enter number: ");
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i++)
    {
        nu=nu*i;
      
    }
     printf("Factorial of %d is\n", n);
        printf("%d", nu);
}