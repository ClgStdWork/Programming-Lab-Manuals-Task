#include <stdio.h>

int main() {
    // Display the menu options to the user
    printf("Press 1 to Add numbers \n");
    printf("Press 2 to Subtract numbers \n");
    printf("Press 3 to Multiply numbers\n");
    printf("Press 4 to Divide numbers\n");
    printf("Press 5 to Square numbers\n");
    printf("Select an Option\n");

    int Choose, a, b; // Declare variables for storing user input and numbers

    // Prompt the user to enter an option
    printf("Enter any Option: \n");
    scanf("%d", &Choose);

    // Check if the entered option is valid (between 1 and 5)
    if (Choose <= 5) {
        // Prompt the user to enter two numbers
        printf("Enter a Number: \n");
        scanf("%d", &a);
        printf("Enter a Number: \n");
        scanf("%d", &b);

        // Perform the selected operation based on the user's choice
        if (Choose == 1) {
            printf("Sum of these numbers is: %d \n", a + b); // Addition
        }
        else if (Choose == 2) {
            printf("Subtraction of these numbers is: %d \n", a - b); // Subtraction
        }
        else if (Choose == 3) {
            printf("Multiplication of these numbers is: %d \n", a * b); // Multiplication
        }
        else if (Choose == 4) {
            printf("Division of these numbers is: %d \n", a / b); // Division
        }
        else if (Choose == 5) {
            printf("Squares of these numbers are: %d %d \n", a * a, b * b); // Square of numbers
        }
    } else {
        // If an invalid option is selected, display an error message
        printf("Incorrect Option");
    }

    return 0;
}
