#include <stdio.h>

#define SIZE 3  // Matrix size

// Function to calculate determinant of a 3×3 matrix
float determinant(int matrix[SIZE][SIZE]) {
    return matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
         - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
         + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
}

// Function to calculate cofactor matrix
void cofactorMatrix(int matrix[SIZE][SIZE], int cofactors[SIZE][SIZE]) {
    cofactors[0][0] =  (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]);
    cofactors[0][1] = -(matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]);
    cofactors[0][2] =  (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    cofactors[1][0] = -(matrix[0][1] * matrix[2][2] - matrix[0][2] * matrix[2][1]);
    cofactors[1][1] =  (matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0]);
    cofactors[1][2] = -(matrix[0][0] * matrix[2][1] - matrix[0][1] * matrix[2][0]);

    cofactors[2][0] =  (matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1]);
    cofactors[2][1] = -(matrix[0][0] * matrix[1][2] - matrix[0][2] * matrix[1][0]);
    cofactors[2][2] =  (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]);
}

// Function to transpose a matrix (to get adjugate)
void transposeMatrix(int matrix[SIZE][SIZE], int transposed[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transposed[j][i] = matrix[i][j];  // Swapping rows and columns
        }
    }
}

// Function to find the inverse of a matrix
void inverseMatrix(int matrix[SIZE][SIZE], float inverse[SIZE][SIZE]) {
    int cofactors[SIZE][SIZE], adjugate[SIZE][SIZE];
    float det = determinant(matrix);

    if (det == 0) {
        printf("Matrix is singular, inverse does not exist.\n");
        return;
    }

    cofactorMatrix(matrix, cofactors);
    transposeMatrix(cofactors, adjugate);  // Adjugate is the transpose of cofactors

    // Divide each element by determinant
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            inverse[i][j] = adjugate[i][j] / det;
        }
    }
}

// Function to print a matrix
void printMatrix(float matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE] = {
        {2, -1, 0},
        {-1, 2, -1},
        {0, -1, 2}
    };

    float inverse[SIZE][SIZE];

    printf("Original Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    inverseMatrix(matrix, inverse);

    printf("\nInverse Matrix:\n");
    printMatrix(inverse);

    return 0;
}
