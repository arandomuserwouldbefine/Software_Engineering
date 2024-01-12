#include <iostream>

using namespace std;

// Class to represent a concatenated string
class ConcatenatedString {
private:
    char* concatenatedString;

public:
    // Constructor to initialize the concatenated string
    ConcatenatedString(const char* str1, const char* str2) {
        int length1 = 0;
        while (str1[length1] != '\0') {
            length1++;
        }

        int length2 = 0;
        while (str2[length2] != '\0') {
            length2++;
        }

        concatenatedString = new char[length1 + length2 + 1]; // +1 for null terminator

        // Copy the characters from the first string
        for (int i = 0; i < length1; ++i) {
            concatenatedString[i] = str1[i];
        }

        // Append the characters from the second string
        for (int i = 0; i < length2; ++i) {
            concatenatedString[length1 + i] = str2[i];
        }

        // Null-terminate the concatenated string
        concatenatedString[length1 + length2] = '\0';
    }

    // Destructor to free memory
    ~ConcatenatedString() {
        delete[] concatenatedString;
    }

    // Function to display the concatenated string
    void displayConcatenatedString() const {
        cout << "Concatenated String: " << concatenatedString << endl;
    }
};

int main() {
    // Input two strings
    char str1[50], str2[50];

    cout << "Enter the first string: ";
    cin.getline(str1, sizeof(str1));

    cout << "Enter the second string: ";
    cin.getline(str2, sizeof(str2));

    // Create a ConcatenatedString object
    ConcatenatedString concatenated(str1, str2);

    // Display the concatenated string
    concatenated.displayConcatenatedString();

    return 0;
}
