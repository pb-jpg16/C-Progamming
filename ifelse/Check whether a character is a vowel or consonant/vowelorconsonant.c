#include <stdio.h>
void main()
{
    char ch;
    printf("Enter a character");
    scanf("%c", &ch);
    ch=toupper();
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
         {
    printf("Vowel");
        }
else{
    printf("Consonant");
}

  
}