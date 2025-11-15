#include <stdio.h>

int absolute(int num)
 {
    return (num < 0) ? -num : num;
}

int main()
 {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Absolute value: %d", absolute(n));
    return 0;
}