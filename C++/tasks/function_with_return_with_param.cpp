#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int main(void){
    int a,b;
    cout<<"Enter two nums: ";
    cin>>a>>b;
    
    
    cout<<"The sum of a and b is : "<<sum(a,b)<<endl;
}
