#include <stdio.h>

int main() {
    int arr[5], i, j, isUnique, foundUnique = 0;

    // Input elements
    printf("Enter 5 elements: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for unique elements and print them
    for (i = 0; i < 5; i++) {
        isUnique = 1;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            foundUnique = 1;
            printf("%d, ", arr[i]);
        }
    }

    // Print message if no element is unique
    if (!foundUnique) {
        printf("No element is unique\n");
    } else {
        printf("\n");
    }

    return 0;
}