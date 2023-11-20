#include <stdio.h>

int main(void) {
    // Variables to store user input, remainder, and the reversed number
    int n, remainder, result = 0;

    // Prompt the user to enter a number for reversal
    printf("Enter a number to reverse: ");
    
    // Read the user input
    scanf("%d", &n);

    // Display the reversed number
    printf("Reverse is: ");

    // Loop to reverse the number
    while (n != 0) {
        // Extract the last digit (remainder)
        remainder = n % 10;

        // Build the reversed number by adding the remainder
        result = result * 10 + remainder;

        // Remove the last digit from the original number
        n /= 10;

        // Print the reversed digit
        printf("%d", remainder);
    }

    // Display the reversed number
    printf("\n");

    return 0;
}
