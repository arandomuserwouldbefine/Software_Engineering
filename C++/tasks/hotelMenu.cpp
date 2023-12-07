#include <iostream>
#include <string.h>
using namespace std;

// Function to calculate and print the total price for Pizza
int calculatePizzaTotal(int quantity) {
    int price = quantity * 90;
    cout<<"Total Price: "<< price<<endl;
    return price;
}

// Function to calculate and print the total price for Burger
int calculateBurgerTotal(int quantity) {
    int price = quantity * 89;
    cout<<"Total Price: "<<price<<endl;
    return price;
}

// Function to calculate and print the total price for Pani-Puri
int calculatePaniPuriTotal(int quantity) {
    int price = quantity * 100;
    cout<<"Total Price: "<<price<<endl;
    return price;
}

// Function to calculate and print the total price for Dosa
int calculateDosaTotal(int quantity) {
    int price = quantity * 80;
    cout<<"Total Price: "<<price<<endl;
    return price;
}

int main(void) {
    int total = 0, quantity = 0, exp;
    char yn, item[100];

    cout<<"============Welcome To TOPS Restaurent==============\n";
    cout<<"\tSr.No\tItem\t\tPrice\n";
    cout<<"\t1\tPizza\t\t90/-\n";
    cout<<"\t2\tBurger\t\t89/-\n";
    cout<<"\t3\tPani-Puri\t100/-\n";
    cout<<"\t4\tDosa\t\t80/-\n";

    // Loop to take orders
    while (yn != 'n') {
        cout<<"Your Item: ";
        cin>> item;

        cout<<"Quantity: ";
        cin>>quantity;

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

        cout<<"Do you want anything else? [y/n]: ";
        cin>>yn;  // Add a space before %c to consume the newline character
    }

    // Print the final receipt
    cout<<"\n--------------------------------\n";
    cout<<"Thank you\n";
    cout<<"Your total is:"<<total<<endl;
    cout<<"\n--------------------------------\n";

    return 0;
}
