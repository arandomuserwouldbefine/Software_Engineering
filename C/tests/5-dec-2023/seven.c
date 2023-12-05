#include <stdio.h>

int main() {
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];
    int rowFirst, colFirst, rowSecond, colSecond;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rowFirst, &colFirst);

    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rowFirst; ++i)
        for (int j = 0; j < colFirst; ++j)
            scanf("%d", &firstMatrix[i][j]);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rowSecond, &colSecond);

    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rowSecond; ++i)
        for (int j = 0; j < colSecond; ++j)
            scanf("%d", &secondMatrix[i][j]);

    for (int i = 0; i < rowFirst; ++i)
        for (int j = 0; j < colSecond; ++j)
            resultMatrix[i][j] = 0;

    for (int i = 0; i < rowFirst; ++i)
        for (int j = 0; j < colSecond; ++j)
            for (int k = 0; k < colFirst; ++k)
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];

    printf("\nResult Matrix:\n");
    for (int i = 0; i < rowFirst; ++i)
        for (int j = 0; j < colSecond; ++j) {
            printf("%d  ", resultMatrix[i][j]);
            if (j == colSecond - 1)
                printf("\n");
        }

    return 0;
}
