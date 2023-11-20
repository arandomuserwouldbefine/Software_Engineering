#include <stdio.h>

int main(void) {
    // Variable to store the number of rows
    int n;

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows: ");
    
    // Read the user input
    scanf("%d", &n);

    // Loop to iterate through each row
    for (int i = 0; i < n; i++) {
        // Nested loop to print each element in the row
        for (int j = 0; j <= i; j++) {
            // Check if the column index is even or odd to print '1' or '0'
            if (j % 2 != 0) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
