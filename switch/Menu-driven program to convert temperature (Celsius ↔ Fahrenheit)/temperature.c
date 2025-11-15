#include <stdio.h>
void main() 
{
    int choice;
    float temp, result;

    while (1) 
    {
        printf("\nTemperature Converter Menu:\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &temp);
                result = (temp * 9.0 / 5.0) + 32.0;
                printf("%.2f Celsius = %.2f Fahrenheit\n", temp, result);
                break;
            case 2:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &temp);
                result = (temp - 32.0) * 5.0 / 9.0;
                printf("%.2f Fahrenheit = %.2f Celsius\n", temp, result);
                break;
            case 3:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
   
}