#include <stdio.h>

// Defining the function
int recur(int n){
    // Setting the base case when to exit the function
    if(n==1){
        return 1;
    }

    // Otherwise just do multiplication of n * n-1;
    else{
        return n*recur(n-1);
    }
}


int main(void){
    // Variable to store n
    int n;

    // Asking user for input
    printf("Enter a number: ");
    scanf("%d",&n);

    // Printing the factorial

    printf("%d",recur(n));
    printf("\n");

}