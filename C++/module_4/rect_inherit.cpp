#include <iostream>

using namespace std;

class Shape {
protected:
    double width;
    double height;

public:
    // Constructor for Shape
    Shape(double w, double h) : width(w), height(h) {}

    // Method to calculate the area (to be overridden by derived classes)
    virtual double calculateArea() const {
        return 0.0; // Default implementation, to be overridden
    }
};

class Rectangle : public Shape {
public:
    // Constructor for Rectangle
    Rectangle(double w, double h) : Shape(w, h) {}

    // Override method to calculate the area for Rectangle
    double calculateArea() const override {
        return width * height;
    }
};

int main() {
    // Create a Rectangle object
    Rectangle myRectangle(5.0, 8.0);

    // Calculate and display the area of the Rectangle
    double area = myRectangle.calculateArea();
    cout << "Area of the Rectangle: " << area << endl;

    return 0;
}
