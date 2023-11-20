#include <stdio.h>

int main(void){
    // Store user input into nums, and initilize the even number counter to zero
    int nums,evenNums=0;

    for(int i =0;i<10;i++){
        // Ask user for 10 inputs
        printf("Enter %dth number: ",i);
        scanf("%d",&nums);

        // if the the modulo of nums is 0 then increment the counter by 1
        if(nums%2==0){
            
            evenNums+=1;
        }

    }
    // Display the even number counter
    printf("Even numbers are %d\n",evenNums);
    return 0;
}