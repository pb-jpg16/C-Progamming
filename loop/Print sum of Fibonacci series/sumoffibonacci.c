#include <stdio.h>
void main()
{
    int n,no=0,a=0,b=1,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
     
     for (int i = 0; i < n; ++i) 
    {
       
        no= a + b;
        a = b;
        b = no;
       sum+=no;
    }
    printf("Sum of first %d Fibonacci number is %d\n", n, sum+1);

    
   
}