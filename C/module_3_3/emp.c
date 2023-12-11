#include <stdio.h>
#include <string.h>

// Structure of employess
typedef struct Employees {
    int empno;
    char empName[20];
    char address[100];
    int age;
} Employees;

int main(void) {
    Employees emps[5];

    // Take data for 5 employees
    for (int i = 0; i < 5; i++) {
        printf("\n\n\nData for the employee: %d\n\n\n", i + 1);

        printf("Enter employee Number : ");
        scanf("%d", &emps[i].empno);
        getchar(); // Consume the newline character

        printf("Enter employee Name: ");
        fgets(emps[i].empName, 20, stdin);

        printf("Enter address: ");
        fgets(emps[i].address, 100, stdin);


        printf("Enter age : ");
        scanf("%d", &emps[i].age);
    }

    // Print the stored data of employees
    for (int i = 0; i < 5; i++) {
        printf("\n\n\nData for the employee: %d\n\n\n", i + 1);

        printf("Number: %d\n", emps[i].empno);
        printf("Name: %s", emps[i].empName);
        printf("Address: %s", emps[i].address);
        printf("Age: %d\n", emps[i].age);
        
        printf("\n=====\n");
    }

    return 0;
}