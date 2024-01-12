#include <iostream>
#include <string>

using namespace std;

// Base class for student information
class Student {
protected:
    int rollNumber;

public:
    // Constructor to initialize student information
    Student(int roll) : rollNumber(roll) {}

    // Function to read student information
    void readStudentInfo() {
        cout << "Enter student roll number: ";
        cin >> rollNumber;
    }

    // Function to display student information
    void displayStudentInfo() const {
        cout << "Student Roll Number: " << rollNumber << endl;
    }
};

// Derived class for test details
class Test : public Student {
protected:
    int marksSubject1;
    int marksSubject2;

public:
    // Constructor to initialize test details
    Test(int roll, int marks1, int marks2) : Student(roll), marksSubject1(marks1), marksSubject2(marks2) {}

    // Function to read test details
    void readTestDetails() {
        readStudentInfo(); // Call base class function to read student information
        cout << "Enter marks obtained in Subject 1: ";
        cin >> marksSubject1;
        cout << "Enter marks obtained in Subject 2: ";
        cin >> marksSubject2;
    }

    // Function to display test details
    void displayTestDetails() const {
        displayStudentInfo(); // Call base class function to display student information
        cout << "Marks Obtained in Subject 1: " << marksSubject1 << endl;
        cout << "Marks Obtained in Subject 2: " << marksSubject2 << endl;
    }
};

// Derived class for result calculations
class Result : public Test {
private:
    int totalMarks;

public:
    // Constructor to initialize result details
    Result(int roll, int marks1, int marks2) : Test(roll, marks1, marks2) {
        calculateTotalMarks();
    }

    // Function to calculate total marks
    void calculateTotalMarks() {
        totalMarks = marksSubject1 + marksSubject2;
    }

    // Function to display result details
    void displayResult() const {
        displayTestDetails(); // Call base class function to display test details
        cout << "Total Marks Obtained: " << totalMarks << endl;
    }
};

int main() {
    // Create a Result object
    Result studentResult(101, 75, 85);

    // Display student's result
    cout << "Student's Result:" << endl;
    studentResult.displayResult();

    return 0;
}
