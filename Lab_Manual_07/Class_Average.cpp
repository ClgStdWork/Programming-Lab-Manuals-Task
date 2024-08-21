#include <stdio.h>

int main() {
    int std1[3][5]; // Array for storing marks of 3 students in 5 tests
    int s = 1;      // Counter for student numbers

    // Input marks for each student
    for(int i = 0; i < 3; i++) { // For each student
        printf("Enter Marks of Student %d :-\n", s);
        int x = 1; // Counter for test numbers
        for(int j = 0; j < 5; j++) { // For each test
            printf("\tEnter Marks of Test %d: ", x);
            scanf("%d", &std1[i][j]); // Store mark in the array
            x++;
        }    
        s++;
    }

    // Calculate and print class average for each test
    for(int i = 0; i < 5; i++) { // For each test
        int sum = 0; // Sum of marks for this test
        for(int j = 0; j < 3; j++) { // For each student
            sum += std1[j][i]; // Add marks for this test
        }
        float Ave = (float)sum / 3; // Compute average
        printf("Class Average for Test %d is: %.2f\n", i + 1, Ave); // Print average
    }

    return 0; // End of the program
}
