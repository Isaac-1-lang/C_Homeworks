#include <stdio.h>

#define ROW1 3  // Rows of first matrix
#define COL1 3  // Columns of first matrix
#define ROW2 3  // Rows of second matrix
#define COL2 3  // Columns of second matrix

void multiplyMatrices(int first[ROW1][COL1], int second[ROW2][COL2], int result[ROW1][COL2]) {
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            result[i][j] = 0;  // Initialize result cell
            for (int k = 0; k < COL1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void printMatrix(int matrix[ROW1][COL2]) {
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int first[ROW1][COL1] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int second[ROW2][COL2] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[ROW1][COL2];

    multiplyMatrices(first, second, result);

    printf("Product of the matrices:\n");
    printMatrix(result);

    return 0;
}
