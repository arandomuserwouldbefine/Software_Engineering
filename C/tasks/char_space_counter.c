#include <stdio.h>
#include <strings.h>
int main(void){
    // Declare a character array, space and character counter
    char chars[100],charCounter=0,spaceCounter=0,length=0;
    // Take input
    printf("Enter a string: ");
    fgets(chars,100,stdin);

    while(chars[length] != '\0'){
        length++;
    }
    // iterate through the array
    for(int i =0;i<length;i++){
        if(chars[i]== 32){
            spaceCounter +=1;
        }
        else if (chars[i] == 0){
            int tmp =0;
        }
        else{
            charCounter +=1;
        }
    }

    printf("Characters are : %d\n",charCounter-1);
    printf("Spaces are : %d\n",spaceCounter);
}