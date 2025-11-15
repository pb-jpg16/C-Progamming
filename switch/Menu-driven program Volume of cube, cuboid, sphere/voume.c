#include <stdio.h>


int main() {
    int choice;
    float side, length, width, height, radius, volume, PI =3.14;

    while (1) {
        printf("\nVolume Calculator Menu:\n");
        printf("1. Volume of Cube\n");
        printf("2. Volume of Cuboid\n");
        printf("3. Volume of Sphere\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter side of cube: ");
                scanf("%f", &side);
                volume = side * side * side;
                printf("Volume of Cube = %.2f\n", volume);
                break;
            case 2:
                printf("Enter length, width, and height of cuboid: ");
                scanf("%f %f %f", &length, &width, &height);
                volume = length * width * height;
                printf("Volume of Cuboid = %.2f\n", volume);
                break;
            case 3:
                printf("Enter radius of sphere: ");
                scanf("%f", &radius);
                volume = (4.0/3.0) * PI * radius * radius * radius;
                printf("Volume of Sphere = %.2f\n", volume);
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}