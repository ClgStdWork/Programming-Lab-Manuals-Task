#include <stdio.h>
#include <stdbool.h>

#define SIZE 3

// Function to print the matrix
void printMatrix(int matrix[SIZE][SIZE]) {
    printf("Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to check if the matrix is a diagonal matrix
bool isDiagonalMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i != j && matrix[i][j] != 0) {
                return false; // Found a non-zero element off the diagonal
            }
        }
    }
    return true;
}

// Function to check if the matrix is an identity matrix
bool isIdentityMatrix(int matrix[SIZE][SIZE]) {
    if (!isDiagonalMatrix(matrix)) {
        return false; // It cannot be an identity matrix if it's not a diagonal matrix
    }
    for (int i = 0; i < SIZE; i++) {
        if (matrix[i][i] != 1) {
            return false; // Diagonal elements must be 1 for an identity matrix
        }
    }
    return true;
}

int main() {
    int matrix[SIZE][SIZE];

    // Input values into the matrix
    printf("Enter values for a 3x3 matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Enter value for position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printMatrix(matrix);

    // Check and display if the matrix is a diagonal matrix
    if (isDiagonalMatrix(matrix)) {
        printf("The matrix is a Diagonal Matrix.\n");
    } else {
        printf("The matrix is not a Diagonal Matrix.\n");
    }

    // Check and display if the matrix is an identity matrix
    if (isIdentityMatrix(matrix)) {
        printf("The matrix is an Identity Matrix.\n");
    } else {
        printf("The matrix is not an Identity Matrix.\n");
    }

    return 0;
}
