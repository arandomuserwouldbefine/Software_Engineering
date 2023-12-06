#include <iostream>
using namespace std;

int main(void){
    
    int n,isPrime=1;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i =2;i<n/2;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    
    if(isPrime==1){
        cout<<"The number "<<n << " is Prime" ;
    }
    else{
        cout<<"The number "<<n<<" is not Prime";
    }
    
}
