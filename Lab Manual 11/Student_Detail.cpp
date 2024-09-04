#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MIN_CGPA 2.5
#define PASS_MARKS 50

// Structure to represent a date
typedef struct {
    int day;
    int month;
    int year;
} Date;

// Structure to store student information
typedef struct {
    char name[MAX_NAME_LENGTH];
    int rollNo;
    Date dob;
    int numCourses;
    float marks[100];  // Array to store marks of courses
    float cgpa;
} Student;

// Function prototypes
void InputStudentData(Student *s);
void DisplayFailedCourses(Student s);
int CheckDropout(Student s);

int main() {
    Student students[3]; // Array to hold 3 students

    // Input data for each student
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        InputStudentData(&students[i]);
    }

    // Check for students at risk of dropping out
    printf("\nStudents at risk of dropping out due to low CGPA:\n");
    for (int i = 0; i < 3; i++) {
        if (CheckDropout(students[i])) {
            printf("%s (Roll No: %d) with CGPA: %.2f\n", students[i].name, students[i].rollNo, students[i].cgpa);
        }
    }

    // Display failed courses for each student
    for (int i = 0; i < 3; i++) {
        printf("\nFailed Courses for %s (Roll No: %d):\n", students[i].name, students[i].rollNo);
        DisplayFailedCourses(students[i]);
    }

    return 0;
}

// Function to input data for a student
void InputStudentData(Student *s) {
    printf("Name: ");
    scanf(" %[^\n]%*c", s->name);

    printf("Roll No: ");
    scanf("%d", &s->rollNo);

    printf("Enter Date of Birth (day month year): ");
    scanf("%d %d %d", &s->dob.day, &s->dob.month, &s->dob.year);

    printf("Number of Courses: ");
    scanf("%d", &s->numCourses);

    for (int i = 0; i < s->numCourses; i++) {
        do {
            printf("Enter marks for course %d: ", i + 1);
            scanf("%f", &s->marks[i]);
            if (s->marks[i] < 0 || s->marks[i] > 100) {
                printf("Marks must be between 0 and 100.\n");
            }
        } while (s->marks[i] < 0 || s->marks[i] > 100);
    }

    // Input CGPA with validation
    do {
        printf("Enter CGPA: ");
        scanf("%f", &s->cgpa);
        if (s->cgpa < 0.0 || s->cgpa > 4.0) {
            printf("CGPA must be between 0.00 and 4.00.\n");
        }
    } while (s->cgpa < 0.0 || s->cgpa > 4.0);
}

// Function to display failed courses for a student
void DisplayFailedCourses(Student s) {
    int failedFlag = 0;
    for (int i = 0; i < s.numCourses; i++) {
        if (s.marks[i] < PASS_MARKS) {
            printf("Course %d: Marks = %.2f (Failed)\n", i + 1, s.marks[i]);
            failedFlag = 1;
        }
    }
    if (!failedFlag) {
        printf("No failed courses.\n");
    }
}

// Function to check if a student is at risk of dropping out
int CheckDropout(Student s) {
    return s.cgpa < MIN_CGPA;
}
