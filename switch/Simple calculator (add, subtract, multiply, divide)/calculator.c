#include <stdio.h>
void main() 
{
    double num1, num2, r;
    char ch;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &ch);

   
    switch(ch) {
        case '+':
            r = num1 + num2;
            printf("Result: %.2lf\n", r);
            break;
        case '-':
            r = num1 - num2;
            printf("Result: %.2lf\n", r);
            break;
        case '*':
            r = num1 * num2;
            printf("Result: %.2lf\n", r);
            break;
        case '/':
            if(num2 != 0)
                r = num1 / num2;
            else {
                printf("Error: Division by zero!");
                return 1;
            }
            printf("Result: %.2lf", r);
            break;
        default:
            printf("Invalid operator.");
    }

  
}