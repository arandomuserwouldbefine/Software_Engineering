#include <iostream>
using namespace std;

int sum(int a, int b=100){
    return a+b;
}

int main(void){
    int a,b;
    cout<<"Enter two nums: ";
    cin>>a;
    
    
    cout<<"The sum of a and b is : "<<sum(a)<<endl;
}
