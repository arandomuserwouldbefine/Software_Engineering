#include <iostream>
using namespace std;

int main(void){
    int arr1[3][3] = {{10,11,12},{13,14,15},{16,17,18}};
    int arr2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int result[3][3];
    
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<result[i][j]<<endl;
        }
    }


}