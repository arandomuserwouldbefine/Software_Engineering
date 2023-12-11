#include <stdio.h>

int main(void){
    // Taking user input
    char str[100];
    int length=0,isPal=1;
    
    printf("Enter string :  ");
    gets(str);

    // loop until null byte is found
    while(str[length] != '\0'){
        length++;
    }

    // Iterate and compare the first and last element
    for(int i = 0;i<length;i++){
        if(str[i] !=str[length-i-1]){
            isPal = 0;
            break;
        }
    }

    if(isPal==1){
        printf("String is palindrome\n");
    }

    else{
        printf("String is not palindrome\n");
    }
    
}