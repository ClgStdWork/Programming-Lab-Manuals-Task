#include <stdio.h>

int main() {
    int arr[10]; // Declare an integer array of size 10

    // Input values for the array
    printf("Enter %d integers:\n", sizeof(arr) / sizeof(arr[0])); // Display prompt
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) { // Loop through array size
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
  
    // Calculate number of elements using sizeof operator
    int num_elements = sizeof(arr) / sizeof(arr[0]);
    printf("Number of elements in the array: %d\n", num_elements);

    return 0; 

    }
