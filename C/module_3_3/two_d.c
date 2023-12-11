#include <stdio.h>


#define ROWS 3
#define COLS 3

// Declaring prototypes
void arraySum(int arr1[ROWS][COLS], int arr2[ROWS][COLS]);
void arraySub(int arr1[ROWS][COLS], int arr2[ROWS][COLS]);
void arrayMul(int arr1[ROWS][COLS], int arr2[ROWS][COLS]);


int main(void){
    // Storing menu item in Choice
    int choice;
    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // Asking user for choice
    printf("Menu: \n");
    printf("\t1) Array Sum\n");
    printf("\t2) Array Sub\n");
    printf("\t3) Array Mul\n\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    if(choice == 1){
        arraySum(arr1,arr2);
    }
    else if(choice == 2){
        arraySub(arr1,arr2);
    }

    else if(choice == 3){
        arrayMul(arr1,arr2);
    }

    else {
        printf("Invalid choice\n");
    }

}


// Defining actual functions

void arraySum(int arr1[ROWS][COLS], int arr2[ROWS][COLS]){
    int result[3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",result[i][j]);
        }
    }
}
void arraySub(int arr1[ROWS][COLS], int arr2[ROWS][COLS]){
    int result[3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            result[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",result[i][j]);
        }
    }
}



void arrayMul(int arr1[ROWS][COLS], int arr2[ROWS][COLS]) {
    int result[3][3] = {0};  

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            for (int k = 0; k < COLS; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}