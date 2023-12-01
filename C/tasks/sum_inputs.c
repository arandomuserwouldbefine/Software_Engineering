#include <stdio.h>


int main(void){
    // Num to store user input, remainder to get digits, sum counter
    int num,remainder,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    // While num is not equal to 0
    while(num!=0){
        // find the remainder 
        remainder = num % 10;
        // append the remainder to the sum
        sum+=remainder;
        // divide the num by 10
        num/=10;
    }

    // Print the sum
    printf("The sum is %d \n",sum);
    return 0;
}