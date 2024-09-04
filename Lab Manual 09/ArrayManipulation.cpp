#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    // Declare and take input for array A
    int A[n];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
    }
    // Array B to store indices of even numbers
    int B[n];  // maximum size can be n, in case all elements are even
    int count = 0;  // to track the number of even elements

    // Find and store the indices of even elements in B
    for(int i = 0; i < n; ++i) {
        if(A[i] % 2 == 0) {
            B[count] = i;
            count++;
        }
    }
    // Declare an array of pointers C
    int* C[count];
    // Point the elements of C to respective entries in A based on indices in B
    for(int i = 0; i < count; ++i) {
        C[i] = &A[B[i]];
    }
    // Output the results
    printf("Indices of even elements (B): ");
    for(int i = 0; i < count; ++i) {
        printf("%d ", B[i]);
    }
    printf("\nValues at those indices (via pointers in C): ");
    for(int i = 0; i < count; ++i) {
        printf("%d ", *C[i]);
    }

    return 0;
}