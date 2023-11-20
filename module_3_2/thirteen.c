#include <stdio.h>

int main(void) {
    // Variables to store the original number, remainder, result, and a temporary counter
    int n = 1234, remainder, result = 0, temp = 1;

    // Loop to iterate through the digits of the number
    while (n != 0) {
        // Extract the last digit (remainder)
        remainder = n % 10;

        // Check if it is the first digit and add it to the result
        if (temp == 1) {
            result += remainder;
        }

        // Remove the last digit from the original number
        n /= 10;

        // Increment the temporary counter
        temp += 1;
    }

    // Add the last digit to the result
    result += remainder;

    // Display the sum of the first and last digits
    printf("The sum of the first and last digit is: %d\n", result);

    return 0;
}
