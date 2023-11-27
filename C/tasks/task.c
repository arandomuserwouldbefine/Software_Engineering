#include <stdio.h>
#include <string.h>

// Function to calculate and print the total price for Pizza
int calculatePizzaTotal(int quantity) {
    int price = quantity * 90;
    printf("Total Price: %d\n", price);
    return price;
}

// Function to calculate and print the total price for Burger
int calculateBurgerTotal(int quantity) {
    int price = quantity * 89;
    printf("Total Price: %d\n", price);
    return price;
}

// Function to calculate and print the total price for Pani-Puri
int calculatePaniPuriTotal(int quantity) {
    int price = quantity * 100;
    printf("Total Price: %d\n", price);
    return price;
}

// Function to calculate and print the total price for Dosa
int calculateDosaTotal(int quantity) {
    int price = quantity * 80;
    printf("Total Price: %d\n", price);
    return price;
}

int main(void) {
    int total = 0, quantity = 0, exp;
    char yn, item[100];

    printf("============Welcome To TOPS Restaurent==============\n");
    printf("\tSr.No\tItem\t\tPrice\n");
    printf("\t1\tPizza\t\t90/-\n");
    printf("\t2\tBurger\t\t89/-\n");
    printf("\t3\tPani-Puri\t100/-\n");
    printf("\t4\tDosa\t\t80/-\n");

    // Loop to take orders
    while (yn != 'n') {
        printf("Your Item: ");
        scanf("%s", item);

        printf("Quantity: ");
        scanf("%d", &quantity);

        // Check the selected item and call the appropriate function
        if (strcmp("Pizza", item) == 0) {
            exp = calculatePizzaTotal(quantity);
        } else if (strcmp("Burger", item) == 0) {
            exp = calculateBurgerTotal(quantity);
        } else if (strcmp("Pani-Puri", item) == 0) {
            exp = calculatePaniPuriTotal(quantity);
        } else if (strcmp("Dosa", item) == 0) {
            exp = calculateDosaTotal(quantity);
        } else {
            // For other items, use a generic function
            exp = quantity * 80;
            printf("Total Price: %d\n", exp);
        }

        // Accumulate the total price
        total += exp;

        // Clear input buffer
        while (getchar() != '\n');

        printf("Do you want anything else? [y/n]: ");
        scanf(" %c", &yn);  // Add a space before %c to consume the newline character
    }

    // Print the final receipt
    printf("\n--------------------------------\n");
    printf("Thank you\n");
    printf("Your total is: %d\n", total);
    printf("\n--------------------------------\n");

    return 0;
}
