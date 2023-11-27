#include <stdio.h>

// Define prototype of the function
int sum(int n);

// main function declaration
int main() {
    int n;
    // Take a number input from the user
    printf("Enter a number: ");
    scanf("%d",&n);
    
    // Print the sum using recursive functions
    printf("%d",sum(n));
    return 0;
}

int sum(int n){
    // if the n is 1 then return 1
    if(n==1){
        return 1;
    }
    else{
    // otherwise just do sum of n + (n-1)
        return n+sum(n-1);
    }
}
