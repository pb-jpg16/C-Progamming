#include <stdio.h>

#define MAX 10

void inputMatrix(int mat[MAX][MAX], int row, int col) {
    printf("Enter elements (%d x %d):\n", row, col);
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &mat[i][j]);
}

void printMatrix(int mat[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

void addMatrix(int a[MAX][MAX], int b[MAX][MAX], int res[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            res[i][j] = a[i][j] + b[i][j];
}

void subMatrix(int a[MAX][MAX], int b[MAX][MAX], int res[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            res[i][j] = a[i][j] - b[i][j];
}

int main() {
    int a[MAX][MAX], b[MAX][MAX], res[MAX][MAX];
    int row, col, choice;

    printf("Enter number of rows and columns (max %d): ", MAX);
    scanf("%d%d", &row, &col);

    if (row > MAX || col > MAX || row <= 0 || col <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Matrix A:\n");
    inputMatrix(a, row, col);
    printf("Matrix B:\n");
    inputMatrix(b, row, col);

    do {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMatrix(a, b, res, row, col);
                printf("Result (A + B):\n");
                printMatrix(res, row, col);
                break;
            case 2:
                subMatrix(a, b, res, row, col);
                printf("Result (A - B):\n");
                printMatrix(res, row, col);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 3);

    return 0;
}