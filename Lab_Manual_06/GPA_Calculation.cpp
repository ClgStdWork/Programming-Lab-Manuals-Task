#include <stdio.h>
float calculateGPA(int marks[], int size) {
    int total = 0;
    float gpa;

    // Calculate the total marks
    for (int i = 0; i < size; i++) {
        total += marks[i];
    }

    // Calculate GPA based on the average marks
    float average = total / (float)size;

    // GPA calculation logic
    if (average >= 85) {
        gpa = 4.0;
    } else if (average >= 80) {
        gpa = 3.7;
    } else if (average >= 75) {
        gpa = 3.3;
    } else if (average >= 70) {
        gpa = 3.0;
    } else if (average >= 65) {
        gpa = 2.7;
    } else if (average >= 60) {
        gpa = 2.3;
    } else if (average >= 55) {
        gpa = 2.0;
    } else if (average >= 50) {
        gpa = 1.7;
    } else {
        gpa = 0.0;
    }

    return gpa;
}

int main() {
    int marks[5]; // Define an array of size 5

    // Take subject marks as input from the user
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    
    float gpa = calculateGPA(marks, 5);

    // Display the GPA on the console
    printf("GPA: %.2f\n", gpa);

    return 0;
}
