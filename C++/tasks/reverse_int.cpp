// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,copy,remainder,result=0;
    cout<<"Enter num: ";
    cin>>n;
    copy = n;
    
    while(n!=0){
        remainder = n % 10;
        result = 10*result+remainder;
        n/=10;
    }
    
    cout<<"Reverse of "<<copy<<" is :"<<result<<endl;

    return 0;
}
