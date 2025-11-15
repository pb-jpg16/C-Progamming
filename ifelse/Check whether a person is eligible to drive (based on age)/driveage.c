#include <stdio.h>

int main()
 {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to drive.");
    } else {
        printf("You are not eligible to drive.");
    }

    return 0;
}