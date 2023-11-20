#include <stdio.h>

// Function prototype for the factorial function
int factorial(int n);

int main(void) {
    // Variable to store user input
    int n;

    // Ask the user for input
    printf("Enter a number to find its factorial: ");
    
    // Read user input
    scanf("%d", &n);

    // Display the factorial of the entered number
    printf("Factorial: %d\n", factorial(n));

    return 0;
}

// Function to calculate the factorial of a number
int factorial(int n) {
    // Variable to store the result
    int result = 1;

    // Calculate factorial using a loop
    for (int i = n; i >= 1; i--) {
        result = result * i;
    }

    // Return the result
    return result;
}
