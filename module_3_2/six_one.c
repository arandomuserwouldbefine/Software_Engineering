#include <stdio.h>

int main(void){
    // Store user input into nums, and initilize the odd number counter to zero
    int nums,oddNums=0;

    for(int i =0;i<10;i++){
        // Ask user for 10 inputs
        printf("Enter %dth number: ",i);
        scanf("%d",&nums);

        // if the the modulo of nums is 0 then increment the counter by 1
        if(nums%2!=0){
            
            oddNums+=1;
        }

    }
    // Display the odd number counter
    printf("Odd numbers are %d\n",oddNums);
    return 0;
}