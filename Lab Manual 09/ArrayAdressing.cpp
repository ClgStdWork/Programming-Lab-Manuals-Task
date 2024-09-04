#include <stdio.h>

int main() {
    // Declare the size of arrays
    int sizeA = 5;
    int sizeB = 5;

    // Declare array A as an array of pointers
    int *A[sizeA];

    // Declare array B as an array of integers
    int B[sizeB];

    // Initialize array B with some values
    for (int i = 0; i < sizeB; i++) {
        B[i] = i + 10; // Assigning values to array B for demonstration
    }

    // Print the addresses of each element in arrays A and B
    printf("Addresses of elements in array A:\n");
    for (int i = 0; i < sizeA; i++) {
        printf("A[%d]: %p\n", i, &A[i]);
    }

    printf("\nAddresses of elements in array B:\n");
    for (int i = 0; i < sizeB; i++) {
        printf("B[%d]: %p\n", i, &B[i]);
    }

    // Link elements of A to elements of B
    for (int i = 0; i < sizeA; i++) {
        A[i] = &B[(i + 1) % sizeB]; // A[0] points to B[1], A[1] points to B[2], and so on
    }

    // Display the contents of arrays A and B
    printf("\nContents of array A (Addresses that A[i] points to):\n");
    for (int i = 0; i < sizeA; i++) {
        printf("A[%d] points to address: %p, Value: %d\n", i, (void*)A[i], *A[i]);
    }

    printf("\nContents of array B:\n");
    for (int i = 0; i < sizeB; i++) {
        printf("B[%d] = %d\n", i, B[i]);
    }

    return 0;
}