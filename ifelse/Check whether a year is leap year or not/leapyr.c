#include <stdio.h>
void main()
{
    int n;
    printf("Enter a year");
    scanf("%d", &n);
    if(n%4==0)
    printf("Leap year");
    else
    printf("Not a leap year");
}