#include <stdio.h> 

int main() {
    // Variable to store the number of rows
    int rows;

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Variable to store the current number, starting with 1
    int n = 1;

    // Outer loop to print all rows
    for (int i = 0; i < rows; i++) {

        // Inner loop to print numbers in each row
        for (int j = 0; j < i; j++) {
            printf("%d ", n++);
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
