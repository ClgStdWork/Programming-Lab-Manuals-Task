#include <stdio.h>

void plusOne(int *digits, int size) {
    // Start from the last digit and add one
    for (int i = size - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return;
        }
        // If the digit is 9, it becomes 0, and the carry goes to the next digit
        digits[i] = 0;
    }

    // If all the digits were 9, we need an extra digit
    printf("1 ");
    for (int i = 0; i < size; i++) {
        printf("0 ");
    }
    printf("\n");
}

int main() {
    int digits[] = {9, 9, 9}; // Example large integer as an array of digits
    int size = sizeof(digits) / sizeof(digits[0]);

    printf("Original number: ");
    for (int i = 0; i < size; i++) {
        printf("%d", digits[i]);
    }
    printf("\n");

    printf("Number after adding one: ");
    plusOne(digits, size);

    // Print the result
    if (digits[0] != 0) { // If the array didn't start with a carry over (1), print it
        for (int i = 0; i < size; i++) {
            printf("%d", digits[i]);
        }
    }
    printf("\n");

    return 0;
}