#include <iostream>
using namespace std;

int main(void){
    int arr[5],evenSum=0,oddSum=0;

    for(int i = 0;i<5;i++){
        cout<<"Enter item at "<<i<<" index: ";
        cin>>arr[i];
        if(arr[i] % 2 == 0){
            evenSum+=arr[i];
        }
        else{
            oddSum+=arr[i];
        }
    }

    cout<<"The even sum is : "<<evenSum<<endl;
    cout<<"The odd sum is : "<<oddSum<<endl;
}