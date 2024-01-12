#include <iostream>
#include <string>
using namespace std;

class Address {
public:
    std::string street;
    std::string city;
    std::string state;
    int zipCode;

    // Constructor for Address
    Address(const std::string& s, const std::string& c, const std::string& st, int zip)
        : street(s), city(c), state(st), zipCode(zip) {}
};

class Student {
private:
    std::string name;
    std::string className;
    int rollNumber;
    double marks;
    Address address;  // Aggregation: Student has an Address

public:
    // Constructor for Student
    Student(const std::string& n, const std::string& cls, int roll, double m, const Address& addr)
        : name(n), className(cls), rollNumber(roll), marks(m), address(addr) {}

    // Method to calculate grade based on marks
    char calculateGrade() const {
        if (marks >= 90.0) {
            return 'A';
        } else if (marks >= 80.0) {
            return 'B';
        } else if (marks >= 70.0) {
            return 'C';
        } else if (marks >= 60.0) {
            return 'D';
        } else {
            return 'F';
        }
    }

    // Method to display student information
    void displayStudentInfo() const {
        std::cout << "Student Information:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << className << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
        std::cout << "Address: " << address.street << ", " << address.city << ", " << address.state << " " << address.zipCode << std::endl;
    }
};

int main() {
    // Create an Address for each student
    Address address1("123 Main St", "Cityville", "Stateville", 12345);
    Address address2("456 Oak St", "Townsville", "Stateville", 67890);

    // Create two Student objects with the respective addresses
    Student student1("John Doe", "10th", 101, 92.5, address1);
    Student student2("Jane Smith", "12th", 202, 78.0, address2);

    // Display student information
    student1.displayStudentInfo();
    std::cout << std::endl;
    student2.displayStudentInfo();

    return 0;
}
