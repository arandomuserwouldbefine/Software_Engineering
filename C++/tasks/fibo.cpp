#include <iostream>
using namespace std;

int main(void){
    int first,second,next,n;
    first = 0;
    second = 1;
    next = first + second;
    cout << "Enter number to print fibo: ";
    cin>>n;
    for(int i = 1;i<n;i++){
        first = second;
        second = next;
        next = first+second;
    }
    cout<<"Fibo of "<<n<<" is " <<second<<endl;
}
