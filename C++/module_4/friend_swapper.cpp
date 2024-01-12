#include <iostream>

using namespace std;

class NumberSwapper {
private:
    int num1;
    int num2;

public:
    // Constructor to initialize the numbers
    NumberSwapper(int a, int b) : num1(a), num2(b) {}

    // Friend function to swap the numbers without using a third variable
    friend void swapNumbers(NumberSwapper& ns);

    // Function to display the numbers
    void displayNumbers() const {
        cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    }
};

// Friend function definition to swap the numbers without using a third variable
void swapNumbers(NumberSwapper& ns) {
    ns.num1 = ns.num1 + ns.num2;
    ns.num2 = ns.num1 - ns.num2;
    ns.num1 = ns.num1 - ns.num2;
}

int main() {
    int a, b;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    // Create a NumberSwapper object
    NumberSwapper numbers(a, b);

    // Display the numbers before swapping
    cout << "Before swapping: num1 = " << a << ", num2 = " << b << endl;

    // Swap the numbers using the friend function
    swapNumbers(numbers);

    // Display the numbers after swapping
    numbers.displayNumbers();

    return 0;
}
