#include <stdio.h>

void printSquare(int n) 
{
    for(int i = 0; i < n; i++)
     {
        for(int j = 0; j < n; j++)
            printf("* ");
        printf("\n");
    }
}

void printTriangle(int n)
 {
    for(int i = 1; i <= n; i++)
     {
        for(int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}

void printPyramid(int n)
 {
    for(int i = 1; i <= n; i++)
     {
        for(int j = 1; j <= n - i; j++)
            printf("  ");
        for(int k = 1; k <= 2 * i - 1; k++)
            printf("* ");
        printf("\n");
    }
}

int main() 
{
    int choice, n;
    while(1) 
    {
        printf("\nMenu:\n");
        printf("1. Print Square\n");
        printf("2. Print Triangle\n");
        printf("3. Print Pyramid\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 4)
         break;

        printf("Enter the number of rows: ");
        scanf("%d", &n);

        switch(choice) 
        {
            case 1:
                printSquare(n);
                break;
            case 2:
                printTriangle(n);
                break;
            case 3:
                printPyramid(n);
                break;
            default:
                printf("Invalid choice!");
        }
    }
}