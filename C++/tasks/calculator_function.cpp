#include <iostream>
using namespace std;

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int division(int a, int b);

int main(void){
    char op;
    int a,b;
    cout<<"Enter operation: +, -, *, /: ";
    cin>>op;
    if(op == '+'){
        cout<<"Enter two num: ";
        cin>>a>>b;
        cout<<"The sum of "<<a<<" and "<<b<<" is "<<add(a,b)<<endl;
    }
    
    if(op == '-'){
        cout<<"Enter two num: ";
        cin>>a>>b;
        cout<<"The sub of "<<a<<" and "<<b<<" is "<<sub(a,b)<<endl;
    }
    if(op == '*'){
        cout<<"Enter two num: ";
        cin>>a>>b;
        cout<<"The mul of "<<a<<" and "<<b<<" is "<<mul(a,b)<<endl;
    }
    
    if(op == '/'){
        cout<<"Enter two num: ";
        cin>>a>>b;
        cout<<"The div of "<<a<<" and "<<b<<" is "<<division(a,b)<<endl;
    }
}

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int division(int a, int b){
    return a/b;
}

int mul(int a, int b){
    return a*b;
}
