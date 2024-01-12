#include <iostream>

using namespace std;

// Base class
class Base {
protected:
    int baseValue;

public:
    // Constructor to initialize baseValue
    Base(int value) : baseValue(value) {
        cout << "Base Constructor called with value: " << baseValue << endl;
    }
};

// Derived class 1
class Derived1 : public Base {
protected:
    int derived1Value;

public:
    // Constructor to initialize derived1Value
    Derived1(int value, int valueDerived1) : Base(value), derived1Value(valueDerived1) {
        cout << "Derived1 Constructor called with value: " << derived1Value << endl;
    }
};

// Derived class 2
class Derived2 : public Derived1 {
private:
    int derived2Value;

public:
    // Constructor to initialize derived2Value
    Derived2(int value, int valueDerived1, int valueDerived2) : Derived1(value, valueDerived1), derived2Value(valueDerived2) {
        cout << "Derived2 Constructor called with value: " << derived2Value << endl;
    }

    // Function to display values
    void displayValues() {
        cout << "Base Value: " << baseValue << endl;
        cout << "Derived1 Value: " << derived1Value << endl;
        cout << "Derived2 Value: " << derived2Value << endl;
    }
};

int main() {
    // Create an object of Derived2
    Derived2 derived2Object(1, 2, 3);

    // Display values using a member function
    cout << "\nDisplaying Values using a Member Function:" << endl;
    derived2Object.displayValues();

    return 0;
}
