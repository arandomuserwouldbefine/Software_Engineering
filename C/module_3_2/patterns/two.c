#include <stdio.h>

int main(void) {
    // Variable to store the number of rows
    int n;

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows: ");
    
    // Read the user input
    scanf("%d", &n);

    // Loop to iterate through each row
    for (int i = 0; i <= n; i++) {
        // Nested loop to print characters in each row
        for(int k = 'A'; k <= 'A' + i; k++){
            printf("%c ", k);
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
