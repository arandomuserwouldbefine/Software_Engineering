#include <iostream>

class Circle {
private:
    double radius;

public:
    // Method to set the radius
    void setRadius(double r) {
        radius = r;
    }

    // Method to calculate and return the area of the circle
    double calculateArea() {
        return 3.14159 * radius * radius;
    }

    // Method to calculate and return the circumference of the circle
    double calculateCircumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    Circle myCircle;

    // Set the radius
    myCircle.setRadius(5.0);

    // Calculate and display the area
    std::cout << "Area of the circle: " << myCircle.calculateArea() << std::endl;

    // Calculate and display the circumference
    std::cout << "Circumference of the circle: " << myCircle.calculateCircumference() << std::endl;

    return 0;
}
