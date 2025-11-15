#include <stdio.h>
void main()
{
    int n,no=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            no = no + i;
        }
    }
    if (n ==no)
        printf("The number is a perfect number.\n");
    else
        printf("The number is not a perfect number.\n");
    
    
}