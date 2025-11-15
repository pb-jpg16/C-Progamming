#include <stdio.h>
void main()
 {
    int n, store, sum = 0, r, d = 0;
        printf("Enter a number: ");
        scanf("%d", &n);
    store = n;

    
    while (n != 0) {
        d++;
        n /= 10;
    }

    n = store;
    while (n != 0) {
        r= n % 10;
        sum += pow(r, d);
        n /= 10;
    }

    if (sum == store)
        printf("The number %d is an Armstrong number.\n", store);
    else
        printf("The number %d is not an Armstrong number.\n", store);
}