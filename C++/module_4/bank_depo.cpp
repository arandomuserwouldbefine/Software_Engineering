#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor to initialize account details
    BankAccount(int accNumber, double initialBalance) : accountNumber(accNumber), balance(initialBalance) {}

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } else {
            cerr << "Error: Invalid deposit amount." << endl;
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cerr << "Error: Invalid withdrawal amount or insufficient funds." << endl;
        }
    }

    // Method to get the current balance
    double getBalance() const {
        return balance;
    }
};

int main() {
    // Create a BankAccount object with an initial balance of $1000
    BankAccount myAccount(123456, 1000.0);

    // Deposit and withdraw money
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.withdraw(1500.0);  // Invalid withdrawal due to insufficient funds

    // Display the final balance
    cout << "Final Balance: $" << myAccount.getBalance() << endl;

    return 0;
}
