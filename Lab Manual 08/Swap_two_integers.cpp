#include <stdio.h>

int main() {
    int num1, num2; 
    int *ptr1, *ptr2; 

    // Input values from the user
    printf("Enter the value of the first integer: ");
    scanf("%d", &num1); 
    printf("Enter the value of the second integer: ");
    scanf("%d", &num2); 

    // Assign pointers to the addresses of the integers
    ptr1 = &num1;
    ptr2 = &num2;

    // Display values before swapping
    printf("Before swapping:\n");
    printf("First integer: %d\n", *ptr1);
    printf("Second integer: %d\n", *ptr2);

    // Swap the values using pointers
    int temp = *ptr1; // Store the value of num1 in temp
    *ptr1 = *ptr2;   // Assign the value of num2 to num1
    *ptr2 = temp;    // Assign the value stored in temp to num2

    // Display values after swapping
    printf("After swapping:\n");
    printf("First integer: %d\n", *ptr1);
    printf("Second integer: %d\n", *ptr2);

    return 0; 
}
