#include <stdio.h>
void main()
 {
    int choice;
    double principal, rate, time, si, ci;

    while (1)
     {
        printf("\n--- Interest Calculator  ---\n");
        printf("1. Simple Interest\n");
        printf("2. Compound Interest\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch (choice) 
        {
            case 1:
                printf("Enter Principal: ");
                scanf("%lf", &principal);
                printf("Enter Rate of Interest: ");
                scanf("%lf", &rate);
                printf("Enter Time (in years): ");
                scanf("%lf", &time);
                si = (principal * rate * time) / 100.0;
                printf("Simple Interest = %.2lf\n", si);
                break;
            case 2:
                printf("Enter Principal: ");
                scanf("%lf", &principal);
                printf("Enter Rate of Interest: ");
                scanf("%lf", &rate);
                printf("Enter Time (in years): ");
                scanf("%lf", &time);
                ci = principal * pow((1 + rate / 100.0), time) - principal;
                printf("Compound Interest = %.2lf\n", ci);
                break;
            case 3:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
}