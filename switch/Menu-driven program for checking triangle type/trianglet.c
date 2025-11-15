#include <stdio.h>
void main() 
{
    int choice;
    float a, b, c;

    while (1)
     {
        printf("\nTriangle Type Checker Menu:\n");
        printf("1. Check triangle type\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 2)
         {
            printf("Exiting program.\n");
            break;
        }

        switch (choice) 
        {
            case 1:
                printf("Enter the three sides of the triangle: ");
                scanf("%f %f %f", &a, &b, &c);

               
                if (a + b > c && a + c > b && b + c > a) 
                {
                    if (a == b && b == c)
                     {
                        printf("Equilateral triangle\n");
                    }
                     else if (a == b || b == c || a == c) 
                     {
                        printf("Isosceles triangle\n");
                    } 
                    else 
                    {
                        printf("Scalene triangle\n");
                    }
                } 
                else 
                {
                    printf("The given sides do not form a triangle.\n");
                }
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
   
}