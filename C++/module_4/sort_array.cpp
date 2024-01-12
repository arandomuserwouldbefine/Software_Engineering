#include <iostream>

using namespace std;

// Template function to perform bubble sort on an array
template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Template function to display elements of an array
template <typename T>
void displayArray(const T arr[], int size) {
    cout << "Sorted Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Sort integers
    int intArr[] = {5, 2, 8, 1, 3};
    int intSize = sizeof(intArr) / sizeof(int);
    cout << "Original Array: ";
    for (int i = 0; i < intSize; ++i) {
        cout << intArr[i] << " ";
    }
    cout << endl;

    bubbleSort(intArr, intSize);
    displayArray(intArr, intSize);

    // Sort doubles
    double doubleArr[] = {3.14, 1.0, 2.71, 0.5, 2.0};
    int doubleSize = sizeof(doubleArr) / sizeof(double);
    cout << "\nOriginal Array: ";
    for (int i = 0; i < doubleSize; ++i) {
        cout << doubleArr[i] << " ";
    }
    cout << endl;

    bubbleSort(doubleArr, doubleSize);
    displayArray(doubleArr, doubleSize);

    return 0;
}
