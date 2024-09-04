#include <stdio.h>

int removeDuplicates(int *nums, int size) {
    if (size == 0) return 0;

    int k = 1; // Start from the second element, as the first one is always unique

    for (int i = 1; i < size; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    
    return k;
}

int main() {
    int nums[10] = {1, 1, 2, 2, 3, 4, 4, 5, 6, 6}; // Example sorted array with duplicates
    int size = 10;

    int k = removeDuplicates(nums, size);

    // Output the result
    printf("Number of unique elements: %d\n", k);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}