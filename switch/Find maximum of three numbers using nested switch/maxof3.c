#include <stdio.h>
void main() {
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    switch (a > b) 
    {
        case 1:
            switch (a > c)
             {
                case 1:
                    max = a;
                    break;
                case 0:
                    max = c;
                    break;
             }
                    break;
        case 0:
            switch (b > c) {
                case 1:
                    max = b;
                     break;
                case 0:
                    max = c;
                     break;
            }
                    break;
    }

    printf("Maximum is: %d\n", max);
  
}