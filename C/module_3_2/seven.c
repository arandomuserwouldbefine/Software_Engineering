#include <stdio.h>

int main(void){
// Store the user input in tableN 
    int tableN;

//  Ask the user to input a number
    printf("Enter a number to print table: ");
    scanf("%d",&tableN);

// Run the outer loop until `i` is less than or equals to tableN print table of a number

    for(int i=1;i<=tableN;i++){
        printf("\n\n===Table of %d===\n",i);

        // Run the inner to calculate multiplications
        for(int j = 1;j<=10;j++){
            printf("%d X %d = %d\n",i,j,i*j);
        }
        printf("======\n\n");

    }
    return 0;
}