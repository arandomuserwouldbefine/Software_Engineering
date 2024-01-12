#include <iostream>
#include <string>

class Cricketer {
protected:
    std::string name;
    int age;

public:
    // Method to input data for Cricketer
    void inputCricketerData() {
        std::cout << "Enter Cricketer's name: ";
        std::cin >> name;
        std::cout << "Enter Cricketer's age: ";
        std::cin >> age;
    }

    // Method to display Cricketer data
    void displayCricketerData() const {
        std::cout << "Cricketer Information:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    // Method to input data for Batsman
    void inputBatsmanData() {
        inputCricketerData();  // Input basic cricketer data using the base class method
        std::cout << "Enter total runs: ";
        std::cin >> totalRuns;
        std::cout << "Enter best performance: ";
        std::cin >> bestPerformance;

        // Calculate average runs
        if (totalRuns > 0) {
            averageRuns = static_cast<double>(totalRuns) / 5.0; // Assuming 5 matches for simplicity
        } else {
            averageRuns = 0.0;
        }
    }

    // Method to display Batsman data
    void displayBatsmanData() const {
        displayCricketerData(); // Display basic cricketer data using the base class method
        std::cout << "Total Runs: " << totalRuns << std::endl;
        std::cout << "Average Runs: " << averageRuns << std::endl;
        std::cout << "Best Performance: " << bestPerformance << std::endl;
    }
};

int main() {
    // Create a Batsman object
    Batsman batsman;

    // Input and display Batsman data
    batsman.inputBatsmanData();
    std::cout << "\nBatsman Information:" << std::endl;
    batsman.displayBatsmanData();

    return 0;
}
