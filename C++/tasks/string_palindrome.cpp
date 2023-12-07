#include <iostream>
using namespace std;

int main(void){

    char str1[10] = "radar";
    int length1=0;

    while(str1[length1] != '\0'){
        length1++;
    }




    for(int i = 0;i<length1;i++){
        if(str1[i] != str1[length1 - i -1]){
            cout<<"Strings are not same";
            return 1;
        }
        
    }
    cout<<"Strings are same";
}