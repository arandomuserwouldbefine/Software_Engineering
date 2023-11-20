#include <stdio.h>

void addition(){
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("Ans: %d\n",n1+n2);
}

void subtraction(){
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("Ans: %d\n",n1-n2);
}

void multiplication(){
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("Ans: %d\n",n1*n2);
}

void division(){
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("Ans: %d\n",n1/n2);
}

void modulo(){
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("Ans: %d\n",n1%n2);
}

int main(void) {

    char yn;
    int choice;

    printf("=======Choice Board======\n");
    printf("\t1. Addition\n\t2. Subtraction\n\t3. Multiplication\n\t4. Division\n\t5. Modulo\n\t6. Exit\n\n");

    while (yn != 'n') {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice == 1){
            addition();
        }
        
        else if (choice == 2){
            subtraction();
        }

        else if (choice == 3){
            multiplication();
        }

        else if(choice == 4){
            division();
        }

        else if(choice == 5){
            modulo();
        }

        else if(choice == 6){
            break;
        }

        else{
            printf("Invalid choice\n");
        }

        while (getchar() != '\n');

        printf("Do you want to continue? [y/n]: ");
        scanf(" %c", &yn);
    }   
    printf("Thanks you\n");

    return 0;
}
