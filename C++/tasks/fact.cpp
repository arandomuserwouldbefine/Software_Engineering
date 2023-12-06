// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n,res=1;
    cout<<"Enter a number to find fact: ";
    cin >>n;
    for(int i =n;i>0;i--){
        res*=i;
    }
    cout<<"Factorial of " << n<<" is " <<res;
}
