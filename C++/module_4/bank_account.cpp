#include <iostream>
using namespace std;

class BankAccount {
private:
    string depositorName;
    long accountNumber;
    string accountType;
    double balance;

public:
    // Method to initialize the account
    void initializeAccount(const string& name, long accNumber, const string& type, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = type;
        balance = initialBalance;
    }

    // Method to deposit an amount
    void deposit(double amount) {
        balance += amount;
        cout << "Amount " << amount << " deposited successfully." << endl;
    }

    // Method to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount " << amount << " withdrawn successfully." << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }

    // Method to display name and balance
    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount myAccount;

    // Initializing account details
    myAccount.initializeAccount("John Doe", 123456789, "Savings", 1000.0);

    // Displaying initial details
    cout << "Initial Account Details:" << endl;
    myAccount.display();

    // Depositing and withdrawing amounts
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    // Displaying updated details
    cout << "\nUpdated Account Details:" << endl;
    myAccount.display();

    return 0;
}
