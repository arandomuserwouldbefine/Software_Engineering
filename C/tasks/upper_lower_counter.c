#include <stdio.h>

int main(void) {
    // Take string input and set length, uppercase, lowercase counters to 0
    char str[100];
    int length = 0, uppercase = 0, lowercase = 0;

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
            // Check if the alphabet letter is uppercase or lowercase
            if (str[i] >= 'A' && str[i] <= 'Z') {
                uppercase++;
            } else {
                lowercase++;
            }
        }
    }

    // Display the results
    printf("Number of uppercase letters: %d\n", uppercase);
    printf("Number of lowercase letters: %d\n", lowercase);

    return 0;
}
