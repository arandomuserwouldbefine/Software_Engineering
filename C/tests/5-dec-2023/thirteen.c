// Recursing factorial

#include <stdio.h>

int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(void){
    int n1;
    printf("Enter a number: ");
    scanf("%d",&n1);
    printf("%d",fact(n1));

    return 0;
}