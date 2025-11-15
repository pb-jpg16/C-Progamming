#include <stdio.h>

void main()
 {
    int num, rev=0, store, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    store = num;

    while (num != 0) {
        temp= num % 10;
        rev = rev * 10 + temp;
        num /= 10;
    }

    if (store == rev)
        printf("%d is a palindrome.", store);
    else
        printf("%d is not a palindrome.", store);

   
}