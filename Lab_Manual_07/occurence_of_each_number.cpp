#include <stdio.h>
#define SIZE 10

int main() {
    int Arr[SIZE]; // Array to store the input numbers

    // Prompt the user to enter SIZE (10) numbers
    printf("Enter %d numbers:\n", SIZE);
    
    // Read SIZE numbers from the user and store them in Arr
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &Arr[i]);
    }

    // Array to store the frequency of each number from 0 to SIZE-1
    int freq[SIZE] = {0};

    // Calculate the frequency of each number in Arr
    for(int i = 0; i < SIZE; i++) {
        // Ensure the number is within the valid range (0 to SIZE-1)
        if (Arr[i] >= 0 && Arr[i] < SIZE) {
            freq[Arr[i]]++; // Increment the frequency of the number
        }
    }

    // Output the frequency of each number that appears in the array
    for(int i = 0; i < SIZE; i++) {
        // Only print the frequency if it is greater than 0
        if(freq[i] > 0) {
            printf("Frequency of %d is %d\n", i, freq[i]);
        }
    }

    return 0;
}
