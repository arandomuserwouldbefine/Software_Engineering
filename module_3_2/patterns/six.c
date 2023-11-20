#include <stdio.h>

int main() {
    // Variable to store the number of rows
    int rows;

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to iterate through each row
    for (int i = 1; i <= rows; i++) {

        // Print '*' for increasing number of times in each row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    // Loop to iterate through each row in reverse order, starting from rows-1
    for (int i = rows - 1; i >= 1; i--) {

        // Print '*' for decreasing number of times in each row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
