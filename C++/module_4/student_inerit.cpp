#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    std::string name;
    int age;

public:
    // Constructor to initialize Person data
    Person(const std::string& n, int a) : name(n), age(a) {}

    // Function to read Person data
    void readPersonData() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    // Function to display Person data
    void displayPersonData() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Student : public Person {
protected:
    double percentage;

public:
    // Constructor to initialize Student data
    Student(const std::string& n, int a, double p) : Person(n, a), percentage(p) {}

    // Function to read Student data
    void readStudentData() {
        readPersonData(); // Call base class function to read common data
        std::cout << "Enter percentage: ";
        std::cin >> percentage;
    }

    // Function to display Student data
    void displayStudentData() const {
        displayPersonData(); // Call base class function to display common data
        std::cout << "Percentage: " << percentage << "%" << std::endl;
    }
};

class Teacher : public Person {
protected:
    double salary;

public:
    // Constructor to initialize Teacher data
    Teacher(const std::string& n, int a, double s) : Person(n, a), salary(s) {}

    // Function to read Teacher data
    void readTeacherData() {
        readPersonData(); // Call base class function to read common data
        std::cout << "Enter salary: ";
        std::cin >> salary;
    }

    // Function to display Teacher data
    void displayTeacherData() const {
        displayPersonData(); // Call base class function to display common data
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    // Create a Student object
    Student myStudent("John Doe", 20, 85.5);

    // Display Student data
    std::cout << "Student Information:" << std::endl;
    myStudent.displayStudentData();
    std::cout << std::endl;

    // Create a Teacher object
    Teacher myTeacher("Jane Smith", 30, 50000.0);

    // Display Teacher data
    std::cout << "Teacher Information:" << std::endl;
    myTeacher.displayTeacherData();

    return 0;
}
