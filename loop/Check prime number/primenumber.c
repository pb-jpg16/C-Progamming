#include<stdio.h>;
void main()
{
    int n, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

   
   
        for (int i = 2; i <= n / 2; i++)
         {
            if (n % i == 0) 
            {
                flag = 1; 
                break;
            }
        }
    

    if (flag == 0)
        printf("The number %d is a prime number.\n", n);
    else
        printf("The number %d is not a prime number.\n", n);
}