// WAP to print the number in reverse order 



#include <stdio.h>

int main(void){
    int n1,remainder,result;
    printf("Enter a number to reverse: ");
    scanf("%d",&n1);

    while(n1!=0){
        remainder = n1 % 10;
        result+=remainder;
        n1/=10;
        printf("%d",remainder);
    }

    return 0;
}