#include <iostream>
using namespace std;
class Calculator {
private:
    double operand1;
    double operand2;

public:
    // Constructor to initialize operands
    Calculator(double op1, double op2) : operand1(op1), operand2(op2) {}

    // Method to perform addition
    double add() {
        return operand1 + operand2;
    }

    // Method to perform subtraction
    double subtract() {
        return operand1 - operand2;
    }

    // Method to perform multiplication
    double multiply() {
        return operand1 * operand2;
    }

    // Method to perform division
    double divide() {
        if (operand2 != 0) {
            return operand1 / operand2;
        } else {
            cerr << "Error: Division by zero!" << endl;
            return 0.0;
        }
    }
};

int main() {
    // Input operands
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Create a Calculator object with the input operands
    Calculator myCalculator(num1, num2);

    // Perform operations and display results
    cout << "Addition: " << myCalculator.add() << endl;
    cout << "Subtraction: " << myCalculator.subtract() << endl;
    cout << "Multiplication: " << myCalculator.multiply() << endl;
    cout << "Division: " << myCalculator.divide() << endl;

    return 0;
}
