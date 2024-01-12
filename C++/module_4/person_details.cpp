#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Method to set the name
    void setName(const string& n) {
        name = n;
    }

    // Method to set the age
    void setAge(int a) {
        age = a;
    }

    // Method to set the country
    void setCountry(const string& c) {
        country = c;
    }

    // Method to get the name
    string getName() const {
        return name;
    }

    // Method to get the age
    int getAge() const {
        return age;
    }

    // Method to get the country
    string getCountry() const {
        return country;
    }
};

int main() {
    Person person;

    // Set the values
    person.setName("John Doe");
    person.setAge(25);
    person.setCountry("USA");

    // Display the values
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

    return 0;
}
