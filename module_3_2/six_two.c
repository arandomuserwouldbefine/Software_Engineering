#include <stdio.h>

int main(void){
    // Store user input into nums, and initilize the evenSum counter to zero
    int nums,evenSum=0;

    for(int i =0;i<10;i++){
        // Ask user for 10 inputs
        printf("Enter %dth number: ",i);
        scanf("%d",&nums);

        // if the the modulo of nums is 0 then add the sum by the nums
        if(nums%2==0){
            
            evenSum+=nums;
        }

    }
    // Display the even sum
    printf("Even sum is %d\n",evenSum);
    return 0;
}