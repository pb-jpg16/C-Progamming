#include <stdio.h>

void main() {
    float cp, sp, pl, p;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        pl = sp - cp;
        p = (pl / cp) * 100;
        printf("Profit: %.2f\n", pl);
        printf("Profit Percentage: %.2f%%", p);
    } else if (cp > sp) {
        pl = cp - sp;
        p = (pl / cp) * 100;
        printf("Loss: %.2f\n", pl);
        printf("Loss Percentage: %.2f%%", p);
    } 
    else 
    {
        printf("No Profit, No Loss.");
    }


}