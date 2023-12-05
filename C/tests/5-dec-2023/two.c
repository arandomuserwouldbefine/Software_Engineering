// WAP to find the number is even or odd using ternary operator

#include <stdio.h>

int main(void){

    int n1;
    printf("Enter a number: ");
    scanf("%d",&n1);

    int res = n1 % 2 == 0 ? printf("Even\n"):printf("Odd");


    return 0;
}