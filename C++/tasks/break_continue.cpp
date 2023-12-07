#include <iostream>
using namespace std;

int main(void){
    int n;
    for(n = 1;n<=10;n++){
        if(n == 3){
            continue;
        }
        else if(n == 6){
            break;
        }
        else{
            cout<<n<<endl;
        }
    }
}
