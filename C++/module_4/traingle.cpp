#include <iostream>
using namespace std;

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    // Constructor to initialize the sides of the triangle
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Method to determine if the triangle is equilateral
    bool isEquilateral() const {
        return side1 == side2 && side2 == side3;
    }

    // Method to determine if the triangle is isosceles
    bool isIsosceles() const {
        return side1 == side2 || side1 == side3 || side2 == side3;
    }

    // Method to determine if the triangle is scalene
    bool isScalene() const {
        return side1 != side2 && side2 != side3 && side1 != side3;
    }
};

int main() {
    // Create a Triangle object with sides 3, 4, and 5
    Triangle myTriangle(3.0, 4.0, 5.0);

    // Check the type of the triangle
    if (myTriangle.isEquilateral()) {
        cout << "The triangle is equilateral." << endl;
    } else if (myTriangle.isIsosceles()) {
        cout << "The triangle is isosceles." << endl;
    } else if (myTriangle.isScalene()) {
        cout << "The triangle is scalene." << endl;
    }

    return 0;
}
