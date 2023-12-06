// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    
    for(int i = 0;i<=rows;i++){
        for(int k = 'A';k<'A'+i;k++){
            cout<<char(k)<<" ";
            
        }
        cout<<"\n";
    }

    return 0;
}
