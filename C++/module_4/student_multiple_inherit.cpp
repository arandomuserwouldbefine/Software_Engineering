#include <iostream>
#include <string>

using namespace std;

// Base class for student information
class StudentInfo {
protected:
    string name;
    int rollNumber;

public:
    // Constructor to initialize student information
    StudentInfo(const string& n, int roll) : name(n), rollNumber(roll) {}

    // Function to read student information
    void readStudentInfo() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

    // Function to display student information
    void displayStudentInfo() const {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Derived class for exam details
class Exam : public StudentInfo {
protected:
    int marks;

public:
    // Constructor to initialize exam details
    Exam(const string& n, int roll, int m) : StudentInfo(n, roll), marks(m) {}

    // Function to read exam details
    void readExamDetails() {
        readStudentInfo(); // Call base class function to read student information
        cout << "Enter marks obtained: ";
        cin >> marks;
    }

    // Function to display exam details
    void displayExamDetails() const {
        displayStudentInfo(); // Call base class function to display student information
        cout << "Marks Obtained: " << marks << endl;
    }
};

// Derived class for result calculations
class Result : public Exam {
private:
    int total;
    double percentage;

public:
    // Constructor to initialize result details
    Result(const string& n, int roll, int m) : Exam(n, roll, m) {
        calculateResult();
    }

    // Function to calculate result details
    void calculateResult() {
        total = marks; // For simplicity, total is considered the same as marks
        percentage = static_cast<double>(marks) / 100.0 * 100.0; // Assuming total marks are 100 for simplicity
    }

    // Function to display result details
    void displayResult() const {
        displayExamDetails(); // Call base class function to display exam details
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    // Create a Result object
    Result studentResult("John Doe", 101, 75);

    // Display student's mark sheet
    cout << "Student's Mark Sheet:" << endl;
    studentResult.displayResult();

    return 0;
}
