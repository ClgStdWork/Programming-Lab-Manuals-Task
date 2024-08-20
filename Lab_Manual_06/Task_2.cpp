/*
Task 2
Create a C program which:
 Initialize an integer array of size 5 with “initializer list”
 Calculate sum of the elements of array loop statement
 Display the Sum on Console
 Submit “.c” file named your “Roll No” on Google Classroom
*/

#include <stdio.h>

int main() {
    // Initialize an integer array of size 5 using an initializer list
    int arr[5] = {10, 20, 30, 40, 50};

    int sum = 0; 

    // Loop to calculate the sum of the array elements
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}
