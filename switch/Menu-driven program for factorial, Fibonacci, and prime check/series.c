#include <stdio.h>
int factorial(int n) 
{
    int f = 1;
    for (int i = 2; i <= n; i++)
        f=f*i;
    return f;
}


void fibonacci(int n) 
{
    int a = 0, b = 1, no;
    printf("Fibonacci series: ");
    for (int i = 0; i < n; ++i) 
    {
        printf("%d ", a);
        no= a + b;
        a = b;
        b = no;
    }
    printf("\n");
}



int prime(int n)
 {
    
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return 0;
    return 1;
}

void main()
 {
    int choice, num;

  while(1)
  {
       
        printf("1. Factorial\n");
        printf("2. Fibonacci Series\n");
        printf("3. Prime Check\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
         {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Factorial of %d is %d\n", num, factorial(num));
                break;
              
            case 2:
                printf("Enter number of terms: ");
                scanf("%d", &num);
                if (num <= 0)
                    printf("Please enter a positive integer.\n");
                else
                    fibonacci(num);
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (prime(num))
                    printf("%d is a prime number.\n", num);
                else
                    printf("%d is not a prime number.\n", num);
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } 

   
}