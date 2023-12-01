#include <stdio.h>

int main(void) {
    // Take string input and set length, vowel, consonant counters to 0
    char str[100];
    int length = 0, vowel = 0, consonant = 0;

    // Take string from user input
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Calculate length of the string
    while (str[length] != '\0') {
        length++;
    }
    length -= 1; // Adjust for the newline character at the end

    for (int i = 0; i < length; i++) {
        // Check if the character is an alphabet letter
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            // Check if the alphabet is a vowel
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowel++;
            } else {
                consonant++;
            }
        }
    }

    // Display the results
    printf("Number of vowels: %d\n", vowel);
    printf("Number of consonants: %d\n", consonant);

    return 0;
}
