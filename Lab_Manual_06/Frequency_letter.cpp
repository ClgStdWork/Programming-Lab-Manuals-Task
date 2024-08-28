#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[100];
    int frequency[26] = {0};  // Array to store frequency of each letter
    int maxFreq = 0;

    // Taking input from the user
    printf("Enter a string: ");
    scanf("%99s", string); // Correctly reading a string up to 99 characters to avoid overflow

    // Calculating frequency of each letter
    for (int i = 0; i < strlen(string); i++) {
        
        char ch = tolower(string[i]);

        if (ch >= 'a' && ch <= 'z') {
            frequency[ch - 'a']++;  // Correctly incrementing the frequency of the letter
            if (frequency[ch - 'a'] > maxFreq) {  // Correctly checking the frequency against maxFreq
                maxFreq = frequency[ch - 'a'];
            }
        }
    }

    // Finding and printing the highest frequency letter(s)
    printf("Highest Frequency Letter(s): ");
    for (int i = 0; i < 26; i++) {
        if (frequency[i] == maxFreq) {
            printf("%c ", i + 'a');
        }
    }
    printf("\n");

    return 0;
}
