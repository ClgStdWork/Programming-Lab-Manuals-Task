#include <stdio.h>

int main() {
    float numbers[3]; // Array to store three numbers
    float *ptr = numbers; // Pointer to the array of numbers

    // Input three numbers from the user
    for (int i = 0; i < 3; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &ptr[i]); // Read each number and store it in the array
    }

    // Calculate the average using pointers
    float sum = 0.0; 
    for (int i = 0; i < 3; i++) {
        sum += ptr[i]; // Add each number to the sum
    }
    float average = sum / 3; // Calculate the average

    
    printf("The average is: %.2f\n", average);

    return 0; 
}
