#include <iostream>

using namespace std;

class MaxFinder {
private:
    int num1;
    int num2;

public:
    // Constructor to initialize the numbers
    MaxFinder(int a, int b) : num1(a), num2(b) {}

    // Friend function to find the maximum number
    friend int findMax(const MaxFinder& mf);

    // Function to display the numbers
    void displayNumbers() const {
        cout << "Numbers: num1 = " << num1 << ", num2 = " << num2 << endl;
    }
};

// Friend function definition to find the maximum number
int findMax(const MaxFinder& mf) {
    return (mf.num1 > mf.num2) ? mf.num1 : mf.num2;
}

int main() {
    int a, b;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    // Create a MaxFinder object
    MaxFinder numbers(a, b);

    // Display the numbers
    numbers.displayNumbers();

    // Find and display the maximum number using the friend function
    cout << "Maximum Number: " << findMax(numbers) << endl;

    return 0;
}
