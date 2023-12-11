#include <stdio.h>

int maxarr(int arr[], int size);
// Declaring prototype of func

int main() {
    int arr[] = {5, 8, 3, 12, 7, 10};
    // Integer array

    int size = sizeof(arr) / sizeof(arr[0]);
    // Calculating the length of the array

    int maxNumber = maxarr(arr, size);
    // Printing the max in the array
    printf("The maximum : %d\n", maxNumber);

    return 0;
}

int maxarr(int arr[], int size) {
    int max = arr[0];
    // Setting the first element as the max

    for (int i = 1; i < size; i++) {
        // Iterating through all elements in the array
        if (arr[i] > max) { 
            // If array of i'th index is greater than max element than set the max as the i'th index
            max = arr[i];
        }
    }

    return max;
}
