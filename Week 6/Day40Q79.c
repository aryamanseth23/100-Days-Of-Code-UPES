//Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int matrix[10][10];
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");

    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i == j) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");

    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i + j == cols - 1) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}