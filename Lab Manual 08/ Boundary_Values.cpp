#include <stdio.h>

int main() {
    int size = 10;  

    int arr[size];  

    // Input values into the array
    for(int i = 0; i < size; i++) {
        printf("Enter Element %d: ", i + 1); // Prompt user to enter the element
        scanf("%d", &arr[i]);  // Read the integer input from the user
    }

    int *small = &arr[0];  // Pointer to the smallest element, initially pointing to the first element
    int *large = &arr[0];  // Pointer to the largest element, initially pointing to the first element

    // Find the smallest and largest elements
    for(int i = 1; i < size; i++) {  // Start from the second element
        if(arr[i] > *large) {  // Check if the current element is greater than the current largest
            large = &arr[i];  // Update pointer to the new largest element
        }
        if(arr[i] < *small) {  // Check if the current element is smaller than the current smallest
            small = &arr[i];  // Update pointer to the new smallest element
        }
    }

   
    printf("Largest Number is: %d\n", *large); // De-reference the pointer to get the largest number
    printf("Smallest Number is: %d\n", *small); // De-reference the pointer to get the smallest number

    return 0; 
