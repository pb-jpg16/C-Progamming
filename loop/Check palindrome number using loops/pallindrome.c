#include <stdio.h>
void main()
{
    int n, rev = 0, store=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    store = n; // Store the original number to compare later

    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    if (rev == store)
        printf("The number %d is a palindrome.\n", store);
    else
        printf("The number %d is not a palindrome.\n", store);
}