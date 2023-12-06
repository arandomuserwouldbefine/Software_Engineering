#include <iostream>

using namespace std;


int main(void){
    // Declaration of arr,sun
    int arr[10],sum=0;
    
    // For loop to take 10 inputs and store it in array
    for(int i = 0;i<10;i++){
        cout <<"Enter "<<i<<" number: ";
        cin>>arr[i];
    }
    
    // for loop to do count sum
    for(int k = 0;k<10;k++){
        sum+=arr[k];
    }
    cout<<"Sum of array is :"<<sum<<endl;

    
}
