#include <iostream>
using namespace std;
// Inline function to calculate multiplication
inline int multiply(int a, int b) {
    return a * b;
}

// Inline function to calculate cubic value
inline int cubic(int x) {
    return x * x * x;
}

int main() {
    // Input values
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate and display multiplication
    cout << "Multiplication of " << num1 << " and " << num2 << ": " << multiply(num1, num2) << endl;

    // Input value for cubic calculation
    int value;

    cout << "Enter a number for cubic calculation: ";
    cin >> value;

    // Calculate and display cubic value
    cout << "Cubic value of " << value << ": " << cubic(value) << endl;

    return 0;
}
