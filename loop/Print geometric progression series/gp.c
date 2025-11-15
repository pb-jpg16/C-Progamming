#include <stdio.h>
#include <math.h>
void main()
{
    int n,d,l,no;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a ratio: ");
    scanf("%d", &d);
    printf("Enter a limit: ");
    scanf("%d", &l);
    no=n;
    for(int i=0;i<l;i++)
    {
        printf("%d ",no);
        
        no=pow(n,d);
        d++;

    }
}