#include <stdio.h>
void main()
 {
    double a, b, c;
    printf("Enter coefficients a, b, and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) 
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 1;
    }

    double discriminant = b * b*( - 4 * a * c); // Δ=b^2−4ac
    double realPart = -b / (2 * a); //-b/2a

    if (discriminant > 0) {
        double root1 = ( -b + sqrt(discriminant) ) / (2 * a);
        double root2 = ( -b - sqrt(discriminant) ) / (2 * a);
        printf("Roots are real and different:");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf", root2);
    } 
    else if (discriminant == 0)
    {
        printf("Roots are real and same:\n");
        printf("Root = %.2lf", realPart);
    } 
    else 
    {
        double imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are imaginary:");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi", realPart, imagPart);
    }

    
}