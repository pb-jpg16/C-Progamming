#include <stdio.h>

void main()
 {
    int units;
    float bill = 0.0;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 1.5;
    } else if (units <= 200) {
        bill = 100 * 1.5 + (units - 100) * 2.5;
    } else if (units <= 300) {
        bill = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4.0;
    } else {
        bill = 100 * 1.5 + 100 * 2.5 + 100 * 4.0 + (units - 300) * 6.0;
    }

    
    bill += 50;

    printf("Total electricity bill: Rs. %.2f", bill);

}