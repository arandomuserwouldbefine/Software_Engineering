#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;

public:
    // Method to set the length
    void setLength(double l) {
        length = l;
    }

    // Method to set the width
    void setWidth(double w) {
        width = w;
    }

    // Method to calculate and return the area of the rectangle
    double calculateArea() {
        return length * width;
    }

    // Method to calculate and return the perimeter of the rectangle
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle myRectangle;

    // Set the length and width
    myRectangle.setLength(5.0);
    myRectangle.setWidth(3.0);

    // Calculate and display the area
    cout << "Area of the rectangle: " << myRectangle.calculateArea() << endl;

    // Calculate and display the perimeter
    cout << "Perimeter of the rectangle: " << myRectangle.calculatePerimeter() << endl;

    return 0;
}
