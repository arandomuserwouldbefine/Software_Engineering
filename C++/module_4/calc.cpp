#include <iostream>

class SimpleCalculator {
public:
    SimpleCalculator() {
        result = 0; // Initiate the resultant variable
    }

    void add(int num) {
        result += num; // Add num to the resultant
    }

    void subtract(int num) {
        result -= num; // Substract num from the resultant
    }

    void multiply(int num) {
        result *= num; // Multiply the resultant by num
    }

    void divide(int num) {
        if (num != 0) {
            result /= num; // Devide the resultant by num if num is not zero
        } else {
            std::cout << "Cannot devide by zero!" << std::endl; // Print an error message if division by zero is attempted
        }
    }

    int getResult() {
        return result; // Retun the final result
    }

private:
    int result; // Variable to store the result
};

int main() {
    SimpleCalculator calculator; // Create an instance of the SimpleCalculator class

    // Perform some calculations
    calculator.add(5);
    calculator.subtract(2);
    calculator.multiply(3);
    calculator.divide(0);

    // Display the final result
    std::cout << "Final Result: " << calculator.getResult() << std::endl;

    return 0;
}
