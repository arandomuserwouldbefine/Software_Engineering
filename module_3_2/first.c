#include <stdio.h>

int main(void){
    // taking operator as character from the user and storing in op
    char op;
    // taking two numbers input and storing in the n1,n2
    int n1,n2;
    
    printf("Enter operator (+,-,/,*)");
    scanf("%c",&op);
    
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

// To add
    if(op == '+'){
        printf("Addition: %d\n",n1+n2);
    }

// To subtract
    else if (op == '-'){
        printf("Subtraction: %d\n",n1-n2);
    }
// To multiply
    else if(op == '*'){
        printf("Multiplication: %d\n",n1*n2);
    }
// To divide

    else if(op == '/'){
        printf("Division is %d\n",n1/n2);
    }
// To  modulo
    else{
        printf("Modulo is: %d\n",n1%n2);
    }

    return 0;
}