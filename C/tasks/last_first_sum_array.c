#include <stdio.h>

int main(void){
    // n store input, array,length counter and remainder;
    int n, arr[10],length=0,remainder;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        // add each digit to array
        remainder = n % 10;
        arr[length] = remainder;
        n/=10;
        length++;
    }

    // Add the digits
    for(int i = 0;i<length;i++){
        printf("%d ",arr[i] + arr[length-1-i]);
    }
    printf("\n");


}