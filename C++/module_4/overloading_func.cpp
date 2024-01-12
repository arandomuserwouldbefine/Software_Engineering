#include <iostream>

using namespace std;

// Function to perform addition
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

// Function to perform subtraction
int subtract(int a, int b) {
    return a - b;
}

double subtract(double a, double b) {
    return a - b;
}

// Function to perform multiplication
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

// Function to perform division
int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        cerr << "Error: Division by zero!" << endl;
        return 0;
    }
}

double divide(double a, double b) {
    if (b != 0.0) {
        return a / b;
    } else {
        cerr << "Error: Division by zero!" << endl;
        return 0.0;
    }
}

int main() {
    int intNum1, intNum2;
    double doubleNum1, doubleNum2;

    // Input for integers
    cout << "Enter two integers: ";
    cin >> intNum1 >> intNum2;

    // Input for doubles
    cout << "Enter two doubles: ";
    cin >> doubleNum1 >> doubleNum2;

    // Perform integer operations
    cout << "\nInteger Operations:" << endl;
    cout << "Addition: " << add(intNum1, intNum2) << endl;
    cout << "Subtraction: " << subtract(intNum1, intNum2) << endl;
    cout << "Multiplication: " << multiply(intNum1, intNum2) << endl;
    cout << "Division: " << divide(intNum1, intNum2) << endl;

    // Perform double operations
    cout << "\nDouble Operations:" << endl;
    cout << "Addition: " << add(doubleNum1, doubleNum2) << endl;
    cout << "Subtraction: " << subtract(doubleNum1, doubleNum2) << endl;
    cout << "Multiplication: " << multiply(doubleNum1, doubleNum2) << endl;
    cout << "Division: " << divide(doubleNum1, doubleNum2) << endl;

    return 0;
}
