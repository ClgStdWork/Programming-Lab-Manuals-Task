#include <stdio.h>

int main() {
    int arr[5]; // Initialize an integer array of size 5

    // Loop to set each element to its index value
    for (int i = 0; i < 5; i++) {
        arr[i] = i; // Set each element to its index value
    }

    // Display the array elements on the console
    printf("Array elements are: \n");
    for (int i = 0; i < 5; i++) {
        printf("Value %d at index %d\n ", arr[i],i); // Print each element
    }

    return 0;
}
