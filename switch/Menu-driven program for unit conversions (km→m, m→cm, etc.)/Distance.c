#include <stdio.h>
void main() 
{
    int choice;
    float input, result;

    while (1) 
    {
        printf("\nUnit Conversion Menu:\n");
        printf("1. Kilometers to Meters\n");
        printf("2. Meters to Centimeters\n");
        printf("3. Centimeters to Millimeters\n");
        printf("4. Meters to Kilometers\n");
        printf("5. Centimeters to Meters\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 6)
         {
            printf("Exiting...\n");
            break;
        }

        switch (choice) 
        {
            case 1:
                printf("Enter distance in kilometers: ");
                scanf("%f", &input);
                result = input * 1000;
                printf("%.2f km = %.2f m\n", input, result);
                break;
            case 2:
                printf("Enter distance in meters: ");
                scanf("%f", &input);
                result = input * 100;
                printf("%.2f m = %.2f cm\n", input, result);
                break;
            case 3:
                printf("Enter distance in centimeters: ");
                scanf("%f", &input);
                result = input * 10;
                printf("%.2f cm = %.2f mm\n", input, result);
                break;
            case 4:
                printf("Enter distance in meters: ");
                scanf("%f", &input);
                result = input / 1000;
                printf("%.2f m = %.2f km\n", input, result);
                break;
            case 5:
                printf("Enter distance in centimeters: ");
                scanf("%f", &input);
                result = input / 100;
                printf("%.2f cm = %.2f m\n", input, result);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}