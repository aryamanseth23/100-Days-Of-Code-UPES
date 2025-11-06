//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main() {
    int matrix[10][10];
    int rows, cols, i, j;
    int diagonalSum = 0; 

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Matrix is not square; cannot compute diagonal sum.\n");
        return 0;
    }

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (i = 0; i < rows; i++) {
        diagonalSum += matrix[i][i];
    }

    
    printf("The sum of the main diagonal elements is: %d\n", diagonalSum);

    return 0;
}