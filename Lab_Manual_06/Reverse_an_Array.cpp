/*
Write a C program which:
 Defines an Array of size “5”
 Initialize the array by taking input from user
 Reverse the elements of array i.e.,
  element at first index should be on the last index and vice versa
*/
#include <stdio.h>

int main() {
    int arr[5]; // Define an array of size 5

    // Take input from the user to initialize the array
    printf("Enter 5 elements for the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the array elements in reverse order
    printf("Array elements in reverse order are:\n");
    for (int i = 4; i >= 0; i--) { 
        printf("%d ", arr[i]);
    }

    return 0;
}
