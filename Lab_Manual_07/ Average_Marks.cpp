#include <stdio.h>

int main() {
    int std1[3][5]; // Array to store marks of 3 students in 5 tests
    int s = 1; // Student number for input prompt

    // Input marks for each student
    for(int i = 0; i < 3; i++) {
        printf("Enter Marks of Student %d :-\n", s);
        int x = 1; // Test number for input prompt
        for(int j = 0; j < 5; j++) {
            printf("\tEnter Marks of Test %d: ", x);
            scanf("%d", &std1[i][j]); // Read marks for test j of student i
            x++;
        }
        s++;
    }

    // Calculate and print the average for each student
    for(int i = 0; i < 3; i++) {
        int sum = 0;
        for(int j = 0; j < 5; j++) {
            sum += std1[i][j]; // Sum all test scores for student i
        }
        float average = (float)sum / 5.0; // Calculate average
        printf("Average marks for Student %d: %.2f\n", i + 1, average);
    }

    return 0;
}
