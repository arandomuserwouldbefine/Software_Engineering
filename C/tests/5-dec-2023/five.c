// WAP to find out the max from given number

#include <stdio.h>


int main(void){
    int n1,remainder,result=1, max;

    printf("Enter a number: ");
    scanf("%d",&n1);

    while(n1!=0){
        remainder = n1 % 10;
        if(remainder > result){
            max = remainder;
            result = 0;
        }
        else{
            max = result;
            remainder = result;
        }
        result = remainder;
        
        n1/=10;
    }
    printf("Max is %d\n",max);
    return 0;
}