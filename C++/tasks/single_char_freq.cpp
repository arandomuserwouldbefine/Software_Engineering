#include <iostream>
using namespace std;

int main(void){
    char str[20],find;
    int length=0;
    cout<<"Enter a str: ";
    cin>>str;
    cout<<"Enter a character to find frequency: ";
    cin>>find;
    while (str[length] != '\0') {
        length++;
    }
    int freq = 1;

    for(int i = 0;i<length;i++){
        if(str[i] != '\0'){
            for(int j = i+1;j<length;j++){
                if(str[j] == str[i]){
                    freq++;
                    str[j] = '\0';
                }
            }
        }
    }
    cout<<"The frequency of "<<find<<" "<<freq<<endl;
    freq=1;

    
    
}
