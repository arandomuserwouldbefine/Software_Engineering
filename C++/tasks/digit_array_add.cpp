#include <iostream>
using namespace std;

int main() {
    int n=829832,arr[6],remain,counter=0,res[6];
    while(n!=0){
        remain = n % 10;
        n/=10;
        arr[counter]=remain;
        counter+=1;
    }
    for(int i = 0;i<6;i++){
        res[i] = arr[i] + arr[counter-i-1];
        if(i<(counter/2)){
            cout<<res[i]<<" ";    
        }
    }
    return 0;
}
