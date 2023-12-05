// WAP to find that the number is prime number or not

#include <stdio.h>

int main(void){

    int n1,isPrime=1;
    printf("Enter a number: ");
    scanf("%d",&n1);

    for(int i =2;i<=n1/2;i++){
        if(n1%2==0){
            isPrime =0;
            break;
        }
    }

    if(isPrime == 1){
        printf("Prime number\n");
    }
    else{
        printf("Co-Prime number\n");
    }
}