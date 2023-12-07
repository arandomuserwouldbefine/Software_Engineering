#include <iostream>
using namespace std;

int main(void){
    for(int i = 0;i<10;i++){
        if(i == 9){
            goto nine;
        }
        else{
            cout<<i<<endl;
        }
    }
    
    nine:
        cout<<"Jump statements using goto\n";
}
