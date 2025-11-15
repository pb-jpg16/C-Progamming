#include <stdio.h>

int is_prime(int n)
 {
    int c=0;
    for(int i=2;i<=n/2;i++)
    {
        c++;
    }
    if(c==0)
    {
    return 1;

    }
   else{
    return 0;
   }
}

int main()
 {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_prime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}