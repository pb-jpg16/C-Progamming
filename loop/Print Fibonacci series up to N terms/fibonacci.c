#include <stdio.h>
void main()
{
    int n,no=0,a=0,b=1;
    printf("Enter a number: ");
    scanf("%d", &n);
     printf("%d\n1\n", a);
     for (int i = 0; i < n; ++i) 
    {
       
        no= a + b;
        a = b;
        b = no;
        printf("%d\n", no);
    }
    
   
}
