#include <stdio.h>
void reverseString(char *str)
 {
    int len = strlen(str);
    for(int i = 0; i < len/2; i++)
     {
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
}
int reverseNumber(int num) {
    int rev = 0;
    while(num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

void main() 
{
    int choice;
    char str[100];
    int num;

    while(1)
     {
        printf("1. Reverse a String\n");
        printf("2. Reverse a Number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        
        switch(choice) 
        {
            case 1:
                printf("Enter a string: ");
                fgets(str, sizeof(str), stdin);
                str[strcspn(str, "\n")] = 0; 
                reverseString(str);
                printf("Reversed string: %s\n", str);
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Reversed number: %d\n", reverseNumber(num));
                break;
            case 3:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

}