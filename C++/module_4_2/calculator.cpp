#include <iostream>

// iostream for I/O operations

using namespace std;
// Using standard library


// Declaring Calculator class
class Calculator{
    // Declaring all members with public access
    public:
    // n1 and n2 for number storing
    int n1,n2;
    // op for operation storing
    char op;
    // Take two nums and operator from user and store in in op
    void takeNum(){
        cout<<"Enter two numbers and operation: ";
        cin>>n1>>n2>>op;
    }

    // Display sum
    void sum(){
        cout<<"The sum is "<<n1+n2<<endl;
    }
    // Display sub
    void sub(){
        cout<<"The sub is "<<n1-n2<<endl;
    }

    // Display division
    void division(){
        cout<<"The div is "<<n1/n2<<endl;
    }

    // Display Multiplication
    void mul(){
        cout<<"The Mul is "<<n1*n2<<endl;
    }

};

int main(void){
    // Creating object
    Calculator calc;
    calc.takeNum();
    
    // Check the operation 

    if(calc.op == '+'){
        calc.sum();
    }
    else if(calc.op == '-'){
        calc.sub();
    }

    else if(calc.op == '*'){
        calc.mul();
    }

    else if(calc.op == '/'){
        calc.division();
    }

    else{
        cout<<"Unknown operator\n";
    }
    return 0;
}