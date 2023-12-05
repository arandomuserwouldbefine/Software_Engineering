// WAP to make a summation of given number

#include <stdio.h>

int main(void){

    int n,remainder,result;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        remainder = n % 10;
        result+=remainder;
        n/=10;
    }

    printf("The summation is %d\n",result);
}