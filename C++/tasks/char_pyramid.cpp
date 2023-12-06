// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int rows;
    char c = 'A';
    
    cout<<"Enter number of rows: ";
    cin>>rows;
    
    for(int i = 0;i<=rows;i++){
        for(int k = 0;k<i;k++){
            cout<<c<<" ";
            c++;
        }
        cout<<"\n";
    }

    return 0;
}
