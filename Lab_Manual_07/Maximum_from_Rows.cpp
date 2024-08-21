#include <stdio.h>
#define SIZE 10 // Define SIZE but not used directly in this code

int main() {
    int Arr[4][4]; // Declare a 4x4 array to store integers

    // Loop to get user input for each element of the array
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            // Prompt the user to enter a positive integer for the current location
            printf("Enter a Positive Integer at location [%d][%d]: ", i, j);
            scanf("%d", &Arr[i][j]); // Store the input in the array
        }
    }

    // Display the contents of the 4x4 array
    printf("Content of Array:\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d  ", Arr[i][j]); // Print each element with spacing
        }
        printf("\n"); // Newline after each row
    }

    // Find and display the maximum value from each row
    printf("Array of max from each Row:\n");
    for(int i = 0; i < 4; i++) {
        int max = Arr[i][0]; // Initialize max to the first element of the row
        for(int j = 1; j < 4; j++) { // Start from the second element
            if(max < Arr[i][j]) {
                max = Arr[i][j]; // Update max if a larger value is found
            }
        }
        printf("Row %d: %d\n", i, max); // Print the maximum value of the current row
    }

    return 0; // End of the program
}
