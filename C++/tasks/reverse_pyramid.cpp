#include <iostream>
using namespace std;

int main(void){
    int n;
    cout<<"Enter num of rows: ";
    cin >> n;
    
    for(int i= n;i>0;i--){
        for(int j = 1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
