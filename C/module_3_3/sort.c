#include <stdio.h>
// Declaring the prototype of functions
int desc(int arr[],int length);
int asc(int arr[],int length);

int main(void){

    // Create an array
    int choice;
    int arr[5] = {1,426,13,51,35};
    // Calculating the length of arr
    int length = sizeof(arr) / sizeof(arr[0]);

    // Menu
    printf("Choices: \n");
    printf("\t1). Ascending order\n");
    printf("\t2). Descending order\n");

    // Ask for the choice
    printf("Enter your choice: ");
    scanf("%d",&choice);

    // If the choice is 1 then ascending order
    if(choice == 1){
        asc(arr,length);
        for(int i = 0;i<length;i++){
            printf("%d ",arr[i]);
        }
    }

    // Other wise descing order
    if(choice == 2){    
        desc(arr,length);
        for(int i = 0;i<length;i++){
            printf("%d ",arr[i]);
        }
    }

    printf("\n");
}

// Defining the actual funcs
// Using bubble sort
int desc(int arr[],int length){
    for(int i = 0;i<length-1;i++){
        for(int j = 0;j<length-i-1;j++){
            if(arr[j] < arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
int asc(int arr[],int length){

    for(int i = 0;i<length-1;i++){
        for(int j = 0;j<length-i-1;j++){
            if(arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
