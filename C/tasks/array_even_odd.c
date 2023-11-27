#include <stdio.h>


int main(void){
    // Declaration of arr,,even sum, odd sum, even and odd counter
    int arr[10],evenSum=0,oddSum=0,evenCount=0,oddCount=0;
    
    // For loop to take 10 inputs and store it in array
    for(int i = 0;i<10;i++){
        printf("Enter %d number: ",i);
        scanf("%d",&arr[i]);
    }
    
    // for loop to do count even and odd sum
    for(int k = 0;k<10;k++){
        // If it's even then add to even sum and increment counter by 1
        if(arr[k]%2==0){
            evenSum+=arr[k];
            evenCount+=1;
        }
        // else add to odd sum and increment counter by 1
        else{
            oddSum+=arr[k];
            oddCount+=1;
        }
    }
    printf("Even sum: %d\n",evenSum);
    printf("Odd sum: %d\n",oddSum);
    printf("Odd count: %d\n",oddCount);
    printf("Even Count: %d\n",evenCount);
    
}
