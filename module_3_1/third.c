#include <stdio.h>

// Building prototype of user defined functions 

void triangle();
void rectangle();
void circle();

int main(void){
    // User choice stored in choice variable

    int choice;

    //  Printing choice board
    printf("Choices: \n");
    printf("1. Area of Triangle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Circle\n\n\n");
    printf("Enter your choice: ");
    // Storing input into choice
    scanf("%d",&choice);

    // if choice is 1 then run triangle()

    if(choice == 1){
        triangle();
    }

    // If choice is 2 then run rectangle()

    else if (choice == 2){
        rectangle();
    }

    // If choice is 3 then run circle()

    else if(choice == 3){
        circle();
    }

    // Otherwise print invalid choice.

    else{
        printf("Invalid choice.");
    }


    return 0;
}


void triangle(){
    // asking height and breadth from the user 

    int expression,h, b;
    printf("Enter height and breadth: ");
    scanf("%d %d",&h,&b);
    // Formula = (1/2) * height * base
    expression = 0.5 * h *b;
    // Print the result
    printf("The area of triangle is %d\n",expression);
}

void rectangle(){
    // Asking length and breadth from the user
    int expression,l, b;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d",&l,&b);
    // Formula = length * breadth
    expression = l*b;
    // printing the result
    printf("The area of rectangle is %d\n",expression);
}

void circle(){
    // asking radius from the user
    int expression, r;
    printf("Enter radius of the circle: ");
    scanf("%d",&r);
    // Formula = PIE * r^2
    expression = 3.14 * r *r ;
    // Printing results
    printf("The area of circle is %d\n",expression);
}