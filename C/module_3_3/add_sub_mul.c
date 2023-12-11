#include <stdio.h>

int main() {
    // Storing choice in choice var
    int choice;
    // Taking two numbers and storing in results in float type
    float num1, num2, res;

    // Asking for input
    printf("Enter two nums: ");
    scanf("%f %f", &num1,&num2);

    // Priting meny
    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter choice : ");
    scanf("%d", &choice);

    switch (choice) {
        // If choice is 1 then do sum
        case 1:
            res = num1 + num2;
            printf("res: %.2f\n", res);
            break;
        // if 2 then do sub
        case 2:
            res = num1 - num2;
            printf("res: %.2f\n", res);
            break;
        // if 3 then do multi
        case 3:
            res = num1 * num2;
            printf("res: %.2f\n", res);
            break;
        // if 4 then do division
        case 4:
            if (num2 != 0) {
                res = num1 / num2;
                printf("res: %.2f\n", res);
            } else {
                printf("Something went wrong\n");
            }
            break;
        // otherwise print invalid choice
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
