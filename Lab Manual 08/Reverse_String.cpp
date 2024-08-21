#include <stdio.h>

int main() 
{
    char str[] = "fatima is a good girl"; // Initialize the string
    int size = sizeof(str) - 1; // Calculate the size of the string excluding the null terminator

    // Print the original string
    printf("Original string:\n");
    for(int i = 0; i < size; i++) {
        printf("%c", str[i]);  // Print each character of the string
    }
    
    printf("\nReverse the string!\n");

    // Print the reversed string
    for(int i = size - 1; i >= 0; i--) {
        printf("%c", str[i]);  // Print each character in reverse order
    }

    printf("\n"); // Print a newline for better formatting

    return 0; // End of the program
}
