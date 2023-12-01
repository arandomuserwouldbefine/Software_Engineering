#include <stdio.h>

int main() {
    int firstMatrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int secondMatrix[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];

    int rowFirst = 3, columnFirst = 3, rowSecond = 3, columnSecond = 3;

    // Initializing elements of matrix result to 0
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiplying matrices and storing in result
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            for (int k = 0; k < columnFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }

    // Displaying the multiplication result
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            printf("%d\t", result[i][j]);
            if (j == columnSecond - 1)
                printf("\n");
        }
    }

    return 0;
}
