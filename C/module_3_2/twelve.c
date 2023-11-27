#include <stdio.h>

int main(void) {
    // Variables to store the original number, sum of digits, and remainder
    int n, result = 0, remainder;

    // Set the initial value of n (original number)
    n = 1523;

    // Loop to calculate the sum of digits in the number
    while (n != 0) {
        // Extract the last digit (remainder)
        remainder = n % 10;

        // Add the current digit to the running sum
        result += remainder;

        // Remove the last digit from the original number
        n /= 10;
    }

    // Display the sum of digits
    printf("The sum of digits is: %d\n", result);

    return 0;
}
