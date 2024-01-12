#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor to initialize employee details
    Employee(const string& empName, int empID, double initialSalary) : name(empName), employeeID(empID), salary(initialSalary) {}

    // Method to set the salary based on performance
    void setSalaryBasedOnPerformance(double performanceFactor) {
        // Assume performanceFactor is a percentage (e.g., 10.0 for a 10% increase)
        if (performanceFactor > 0) {
            salary += (salary * performanceFactor) / 100.0;
            cout << "Salary updated based on performance. New salary: $" << salary << endl;
        } else {
            cerr << "Error: Invalid performance factor." << endl;
        }
    }

    // Method to get the employee name
    string getName() const {
        return name;
    }

    // Method to get the employee ID
    int getEmployeeID() const {
        return employeeID;
    }

    // Method to get the employee salary
    double getSalary() const {
        return salary;
    }
};

int main() {
    // Create an Employee object with initial details
    Employee emp("John Doe", 123456, 50000.0);

    // Display initial employee details
    cout << "Employee Details:" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Employee ID: " << emp.getEmployeeID() << endl;
    cout << "Salary: $" << emp.getSalary() << endl;

    // Update salary based on performance (10% increase)
    emp.setSalaryBasedOnPerformance(10.0);

    // Display updated employee details
    cout << "\nUpdated Employee Details:" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Employee ID: " << emp.getEmployeeID() << endl;
    cout << "Updated Salary: $" << emp.getSalary() << endl;

    return 0;
}
