#include <iostream>
using namespace std;

#define PI 3.14159265359

// Function to calculate and return the area of a circle
float calculateCircleArea(float radius) {
    return PI * radius * radius;
}

// Function to calculate and return the area of a triangle
float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}

// Function to calculate and return the area of a rectangle
float calculateRectangleArea(float length, float width) {
    return length * width;
}

int main() {
    int choice;
    float radius, length, width, area;

    cout<<"=============Area Finder=============\n";
    cout<<"\t1. Circle\n\t2. Triangle\n\t3. Rectangle\n";

    cout<<"\nEnter Choice: ";
    cin>>choice;

    switch (choice) {
        case 1:
            // Code for Circle
            cout<<"Enter radius: ";
            cin>>radius;

            area = calculateCircleArea(radius);

            cout<<"Area of Circle: "<<area<<endl;
            break;
        case 2:
            // Code for Triangle
            cout<<"Enter base length: ";
            cin>>length;

            cout<<"Enter height: ";
            cin>>width;

            area = calculateTriangleArea(length, width);

            cout<<"Area of Triangle: "<<area<<endl;
            break;
        case 3:
            // Code for Rectangle
            cout<<"Enter length: ";
            cin>>length;

            cout<<"Enter width: ";
            cin>>width;

            area = calculateRectangleArea(length, width);

            cout<<"Area of Rectangle: "<< area<<endl;
            break;
        default:
            cout<<"Invalid Choice\n";
            break;
    }

    cout<<"\n>>>>>>>>>>>>>Thank You\n";

    return 0;
}
