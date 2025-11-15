#include<stdio.h>;
void main()
{
    int ul,ll, flag = 0;
    printf("Enter a upper limit: ");
    scanf("%d", &ul);
    printf("Enter a lower limit: ");
    scanf("%d", &ll);
    printf("Prime numbers between %d and %d are:\n", ll, ul);
    for(int n=ll;n<=ul;n++)
    {
        flag = 0;
        for (int i = 2; i <= n / 2; i++)
         {
            if (n % i == 0) 
            {
                flag = 1; 
                break;
            }
        }
    
        if (flag == 0 && n!=1)
            printf("%d\n", n);
    }

}