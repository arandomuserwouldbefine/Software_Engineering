#include <stdio.h>
#include <strings.h>
int main(void){
    // Declare a character array, space and character counter
    char chars[100],charCounter=0,spaceCounter=0,digitCounter=0,length=0;
    // Take input
    printf("Enter a string: ");
    fgets(chars,100,stdin);

    while(chars[length] != '\0'){
        length++;
    }
    // iterate through the array
    for(int i =0;i<length;i++){
        
        if(chars[i]>= 48 && chars[i] <= 57){
            digitCounter +=1;
        }
        else if((chars[i] >=65 && chars[i] <=90) || (chars[i] >= 97 && chars[i] <=122)){
            charCounter+=1;
        }
        else if (chars[i] == 32){
            spaceCounter +=1;
        }
    }

    printf("Characters are : %d\n",charCounter);
    printf("Digits are : %d\n",digitCounter);
    printf("Spaces are : %d\n",spaceCounter);
}