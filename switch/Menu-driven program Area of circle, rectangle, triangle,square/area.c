#include <stdio.h>
void main() {
    int choice;
    float area, radius, length, breadth, base, height, side,pi=3.14;

    while (1) 
    {
        printf("\n--- Area Calculator ---\n");
        printf("1. Area of Circle\n");
        printf("2. Area of Rectangle\n");
        printf("3. Area of Triangle\n");
        printf("4. Area of Square\n");
        printf("5. Exit\n");
        printf("Enter your choice:\n ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter radius of circle: ");
                scanf("%f", &radius);
                area = pi * radius * radius;
                printf("Area of Circle = %.2f", area);
                break;
            case 2:
                printf("Enter length and breadth of rectangle: ");
                scanf("%f %f", &length, &breadth);
                area = length * breadth;
                printf("Area of Rectangle = %.2f", area);
                break;
            case 3:
                printf("Enter base and height of triangle: ");
                scanf("%f%f", &base, &height);
                area = 0.5 * base * height;
                printf("Area of Triangle = %.2f", area);
                break;
            case 4:
                printf("Enter side of square: ");
                scanf("%f", &side);
                area = side * side;
                printf("Area of Square = %.2f", area);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
               
            default:
                printf("Invalid choice! Please try again.");
        }
    }
}