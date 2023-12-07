#include <iostream>
using namespace std;


int main(void){
    int percentage;
    cout<<"Enter your percentage: ";
    cin>>percentage;
    
    if(percentage>80 && percentage <=100){
        cout<<"A Grade\n";
    }
    else if(percentage >60 && percentage<=80){
        cout<<"B Grade\n";
    }
    else if(percentage > 40 && percentage <=60){
        cout<<"C grade\n";
    }
    else if(percentage > 0 && percentage <=40){
        cout<<"Fail\n";
    }
    
    else{
        cout<<"Enter valid percetage between 0 to 100\n";
    }
    
}
