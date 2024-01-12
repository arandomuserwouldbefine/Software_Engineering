#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor to initialize date details
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Method to set the date
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Method to get the day
    int getDay() const {
        return day;
    }

    // Method to get the month
    int getMonth() const {
        return month;
    }

    // Method to get the year
    int getYear() const {
        return year;
    }

    // Method to validate if the date is valid
    bool isValidDate() const {
        // Simple validation for demonstration purposes
        return (day >= 1 && day <= 31) && (month >= 1 && month <= 12) && (year >= 1900);
    }
};

int main() {
    // Create a Date object with initial details
    Date myDate(15, 3, 2022);

    // Display initial date details
    std::cout << "Date Details:" << std::endl;
    std::cout << "Day: " << myDate.getDay() << std::endl;
    std::cout << "Month: " << myDate.getMonth() << std::endl;
    std::cout << "Year: " << myDate.getYear() << std::endl;

    // Validate if the date is valid
    if (myDate.isValidDate()) {
        std::cout << "The date is valid." << std::endl;
    } else {
        std::cerr << "Error: The date is not valid." << std::endl;
    }

    return 0;
}
