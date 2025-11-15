#include <stdio.h>
int count_vowels(const char *str)
 {
    int count = 0;
    for (int i = 0; str[i]; i++) 
    {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }
    return count;
}

int count_consonants(const char *str)
 {
    int count = 0;
    for (int i = 0; str[i]; i++) 
    {
        char ch = tolower(str[i]);
        if (isalpha(ch) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
            count++;
    }
    return count;
}

int count_digits(const char *str) 
{
    int count = 0;
    for (int i = 0; str[i]; i++) 
    {
        if (isdigit(str[i]))
            count++;
    }
    return count;
}

void main()
 {
    char str[100];
    int ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

   while(1)
    {
       
        printf("1. Count vowels\n");
        printf("2. Count consonants\n");
        printf("3. Count digits\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        getchar(); 

        switch (ch) {
            case 1:
                printf("Number of vowels: %d\n", count_vowels(str));
                break;
            case 2:
                printf("Number of consonants: %d\n", count_consonants(str));
                break;
            case 3:
                printf("Number of digits: %d\n", count_digits(str));
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
        return 0;
    } 
}