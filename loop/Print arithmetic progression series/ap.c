#include <stdio.h>
void main()
{
    int n,d,l;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a difference: ");
    scanf("%d", &d);
    printf("Enter a limit: ");
    scanf("%d", &l);
    for(int i=0;i<l;i++)
    {
        printf("%d ",n);
        n=n+d;
    }
}