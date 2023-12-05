// WAP to reverse a string and check that the string is palindrom or not


#include <stdio.h>

int main(void){
    int length=0,isPal=1;

    char str[100];

    printf("Enter string: ");
    gets(str);

    while(str[length] != '\0'){
        length++;
    }

    for(int i = 0;i<length;i++){
        if(str[i] != str[length-i-1]){
            isPal =0;
            break;
        }
    }

    if(isPal == 1){
        printf("The string is palindrome\n");
    }

    else{
        printf("The string is not palindrome\n");
    }
    return 0;
}