#include <stdio.h>
#include <string.h>

int main() {
    char arr[10];           // Define a character array of size 10
    int frequency[26] = {0}; // Array to store the frequency of each letter
    int maxFreq = 0;        // Variable to store the highest frequency
    char maxChar;           // Variable to store the letter with the highest frequency

    // Take input from the user to fill the array
    printf("Enter a word of up to 10 characters:\n");
    scanf("%s", arr);

    // Calculate the frequency of each letter in the array
    for (int i = 0; i < strlen(arr); i++) {
        char ch = arr[i];
        if (ch >= 'a' && ch <= 'z') { // For lowercase letters
            frequency[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') { // For uppercase letters
            frequency[ch - 'A']++;
        }
    }

    // Find the letter with the highest frequency
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > maxFreq) {
            maxFreq = frequency[i];
            maxChar = i + 'A'; // Convert index back to character (uppercase)
        }
    }

    // Display the letter with the highest frequency on the console
    printf("Highest Frequency Letter: %c\n", maxChar);

    return 0;
}
