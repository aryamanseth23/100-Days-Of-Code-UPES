//Multiply two matrices.
#include <stdio.h>
int main() {
    int matrixA[10][10], matrixB[10][10], result[10][10];
    int rowsA, colsA, rowsB, colsB;
    int i, j, k;

    printf("Enter number of rows for Matrix A: ");
    scanf("%d", &rowsA);
    printf("Enter number of columns for Matrix A: ");
    scanf("%d", &colsA);

    printf("Enter number of rows for Matrix B: ");
    scanf("%d", &rowsB);
    printf("Enter number of columns for Matrix B: ");
    scanf("%d", &colsB);

    if (colsA != rowsB) {
        printf("Matrix multiplication not possible with the given dimensions.\n");
        return 0;
    }

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < rowsA; i++) {
        for (j = 0; j < colsA; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < rowsB; i++) {
        for (j = 0; j < colsB; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrixB[i][j]);
        }
    }

    
    for (i = 0; i < rowsA; i++) {
        for (j = 0; j < colsB; j++) {
            result[i][j] = 0; 
            for (k = 0; k < colsA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    
    printf("Resultant Matrix after multiplication:\n");
    for (i = 0; i < rowsA; i++) {
        for (j = 0; j < colsB; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}