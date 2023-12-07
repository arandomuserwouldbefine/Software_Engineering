#include <iostream>
using namespace std;

int main(void){

    int arr[5],evenCounter=0,oddCounter=0,evenSum=0,oddSum=0;

    for(int i = 0;i<5;i++){
        cout<<"Enter item at "<<i<<" index: ";
        cin>>arr[i];
        if(arr[i] % 2 == 0){
            evenSum+=arr[i];
            evenCounter+=1;
        }
        else{
            oddSum+=arr[i];
            oddCounter+=1;
        }
    }


    cout<<"The even sum is : "<<evenSum<<endl;
    cout<<"The odd sum is : "<<oddSum<<endl;
    cout<<"The even count is : "<<evenCounter<<endl;
    cout<<"The odd count is : "<<oddCounter<<endl;

}