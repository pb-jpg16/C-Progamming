#include <stdio.h>
void main()
{
    int n,m;
    printf("Enter a number");
    scanf("%d %d", &n,&m);
    if(n>m)
    {
       printf("%d is greater",n); 
    }
   
    else if(m>n){
        printf("%d is Greater",m);
    }
    else{
        printf("Equal");
    }
    }
