#include <iostream>
using namespace std;

int main() {
    char str[40];
    int length = 0;
    cout << "Enter a string: ";
    cin.getline(str, 40);

    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length; i++) {
        if (str[i] != '\0') {
            int freq = 1;
            cout << "The frequency of " << str[i] << ": ";

            for (int j = i + 1; j < length; j++) {
                if (str[j] == str[i]) {
                    freq++;
                    str[j] = '\0';
                }
            }

            cout << freq << endl;
        }
    }
}
