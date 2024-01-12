#include <iostream>

using namespace std;

// Base class
class Base {
private:
    int privateMemberBase;

protected:
    int protectedMemberBase;

public:
    int publicMemberBase;

    // Constructor to initialize members
    Base(int privateVal, int protectedVal, int publicVal)
        : privateMemberBase(privateVal), protectedMemberBase(protectedVal), publicMemberBase(publicVal) {}

    // Function to display values
    void displayBase() {
        cout << "Private Member (Base): Not Accessible" << endl;
        cout << "Protected Member (Base): " << protectedMemberBase << endl;
        cout << "Public Member (Base): " << publicMemberBase << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Constructor to initialize members
    Derived(int privateVal, int protectedVal, int publicVal)
        : Base(privateVal, protectedVal, publicVal) {}

    // Function to display values
    void displayDerived() {
        // Private member of the base class is not accessible in the derived class
        // cout << "Private Member (Base) in Derived: " << privateMemberBase << endl;

        // Protected and public members are accessible
        cout << "Protected Member (Base) in Derived: " << protectedMemberBase << endl;
        cout << "Public Member (Base) in Derived: " << publicMemberBase << endl;
    }
};

int main() {
    // Create an object of the derived class
    Derived derivedObject(1, 2, 3);

    // Access and display members from the derived class
    cout << "Accessing Members in Derived Class:" << endl;
    derivedObject.displayDerived();

    // Access and display members from the base class through the derived class
    cout << "\nAccessing Members in Base Class through Derived Class:" << endl;
    derivedObject.displayBase();

    return 0;
}
