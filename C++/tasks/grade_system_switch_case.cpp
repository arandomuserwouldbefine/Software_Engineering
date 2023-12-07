#include <iostream>
using namespace std;

int main(void) {
    int percentage;
    cout << "Enter your percentage: ";
    cin >> percentage;

    switch (percentage / 10) {
    case 10:
        cout << "A grade\n";
        break;
    case 9:
        cout << "A grade\n";
        break;
    case 8:
        cout << "B grade\n";
        break;
    case 7:
        cout << "B grade\n";
        break;
    case 6:
        cout << "C grade\n";
        break;
        
    case 5:
        cout << "C grade\n";
        break;
    default:
        cout << "Fail\n";
    }
}
