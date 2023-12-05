#include <stdio.h>


// Write a program to swap the two numbers without using third variable



int main(void){
    int n1,n2;
    printf("Enter two num: ");
    scanf("%d %d",&n1,&n2);
    printf("====Before======\n");
    printf("Value of n1: %d\n",n1);
    printf("Value of n2: %d\n",n2);
    
    n1 = n1 + n2;
    n2 = n1-n2;
    n1 = n1 -n2;
    printf("====After======\n");
    printf("Value of n1: %d\n",n1);
    printf("Value of n2: %d\n",n2);
    
    return 0;
}

