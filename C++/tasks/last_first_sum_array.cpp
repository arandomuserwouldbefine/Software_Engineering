#include <iostream>
using namespace std;

int main(void){
    // n store input, array,length counter and remainder;
    int n, arr[10],length=0,remainder;

    // Take input from the user
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0){
        // add each digit to array
        remainder = n % 10;
        arr[length] = remainder;
        n/=10;
        length++;
    }

    // Add the digits
    for(int i = 0;i<length;i++){
        cout<<arr[i] + arr[length-1-i];
    }
    cout<<"\n";


}