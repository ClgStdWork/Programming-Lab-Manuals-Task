#include <stdio.h>

int main() {
    int arr[5];
    int unique[5];
    int count[5] = {0}; // Array to count occurrences of elements

    // Taking input from the user
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        unique[i] = arr[i]; // Initially assume all elements are unique
    }

    // Counting occurrences of each element
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i] == arr[j]) {
                count[i]++;
            }
        }
    }

    int hasUnique = 0; // Flag to check if any element is unique
    printf("Unique Elements: ");
    for (int i = 0; i < 5; i++) {
        if (count[i] == 1) { // Element is unique if it appears only once
            printf("%d ", unique[i]);
            hasUnique = 1;
        }
    }

    // If no element is unique, print the corresponding message
    if (!hasUnique) {
        printf("No element is unique\n");
    } else {
        printf("\n");
    }

    return 0;
}
