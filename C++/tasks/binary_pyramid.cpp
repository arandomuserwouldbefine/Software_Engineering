// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int rows;
    
    cout<<"Enter number of rows: ";
    cin>>rows;
    
    for(int i = 0;i<=rows;i++){
        for(int k = 0;k<i;k++){
            if(k%2 ==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<"\n";
    }

    return 0;
}
