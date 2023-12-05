// WAP a program to sort the array of 5 elements.


#include <stdio.h>


int main(void){
    int arr[5] = {21390,1325,1356,21,3};

    for(int i =0;i<5;i++){
        for(int j = 0;j<5-i-1;j++){
            if(arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    for(int k = 0;k<5;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}