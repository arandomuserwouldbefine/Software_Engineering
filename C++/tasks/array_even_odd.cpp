#include <iostream>
using namespace std;

int main(void){
    // Declaration of arr,,even sum, odd sum, even and odd counter
    int arr[10],evenSum=0,oddSum=0,evenCount=0,oddCount=0;
    
    // For loop to take 10 inputs and store it in array
    for(int i = 0;i<10;i++){
        cout<<"Enter "<<i<<" number: ";
        cin>>arr[i];
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
    cout<<"Even sum: "<<evenSum<<"\n";
    cout<<"Odd sum: "<<oddSum<<endl;
    cout<<"Odd count:"<<oddCount<<endl;
    cout<<"Even Count: "<<evenCount<<endl;
    
}
