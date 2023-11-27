#include <stdio.h>

int main(void) {
    // Initialize variables for the Fibonacci sequence
    int first = 0, second = 1, next;

    // Set the number of terms in the sequence
    int n = 10;

    // Iterate to generate the Fibonacci sequence
    for (int i = 0; i < n; i++) {
        // Update values in the sequence
        first = second;
        second = next;
        next = first + second;
    }

    // Display the nth term of the Fibonacci sequence
    printf("The %dth term of the Fibonacci sequence: %d\n", n, next);

    return 0;
}
