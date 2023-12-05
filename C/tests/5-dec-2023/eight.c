// WAP to find the length of the string without using inbuilt function

#include <stdio.h>

int main(void){
    int length=0;
    char input[100];


    printf("Enter a string: ");
    gets(input);

    while(input[length]!='\0'){
        length++;
    }

    printf("The length of the string is %d\n",length);

    return 0;
}