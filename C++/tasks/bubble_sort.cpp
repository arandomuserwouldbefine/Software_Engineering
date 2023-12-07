#include <iostream>
using namespace std;

int main(void){
    int arr[] = {151,5,136,137,237227};
    int length = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0;i<length;i++){
        for(int j = 0;j<length-i-1;j++){
            if(arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    for(int i = 0;i<length;i++){
        cout<<arr[i]<<" ";
    }
}