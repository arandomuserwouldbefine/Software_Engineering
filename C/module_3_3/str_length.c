#include <stdio.h>

int main(void){
    // Taking user input
    char str[100];
    int length=0;
    
    printf("Enter string to calc length: ");
    fgets(str,100,stdin);

    // loop until null byte is found
    while(str[length] != '\0'){
        length++;
    }

    // Print length
    printf("Length: %d\n",length);
}