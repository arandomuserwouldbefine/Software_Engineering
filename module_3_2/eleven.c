#include <stdio.h>

int main(void) {
    // Variables to store the original number, maximum digit, and remainder
    int n, max = 0, remainder;

    // Set the initial value of n (original number)
    n = 1569;

    // Loop to find the maximum digit in the number
    while (n != 0) {
        // Extract the last digit (remainder)
        remainder = n % 10;

        // Check if the current digit is greater than the current maximum
        if (remainder > max) {
            // Update the maximum digit
            max = remainder;
        }

        // Remove the last digit from the original number
        n /= 10;
    }

    // Display the maximum digit
    printf("The max digit is: %d\n", max);

    return 0;
}
