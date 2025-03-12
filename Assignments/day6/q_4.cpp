#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Default constructor
    Account() : accountNumber(0), balance(0.0) {
        cout << "Default constructor called. This pointer: " << this << endl;
    }

    // Parameterized constructor
    Account(int accountNumber, string accountHolder, double balance) : accountNumber(accountNumber), accountHolder(accountHolder), balance(balance) {
        cout << "Parameterized constructor called. This pointer: " << this << endl;
    }

    // Accept function
    void Accept() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Account Holder: ";
        cin.ignore(); // Ignore the newline character left in the input buffer
        getline(cin, accountHolder);
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Display function
    void Display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }

    // Deposit function
    void Deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
    }

    // Withdraw function
    bool Withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrew $" << amount << ". New balance: $" << balance << endl;
            return true;
        } else {
            cout << "Insufficient funds. Current balance: $" << balance << endl;
            return false;
        }
    }
};

int main() {
    const int MAX_ACCOUNTS = 100;
    Account* accounts[MAX_ACCOUNTS] = {nullptr};
    int numAccounts = 0;

    int choice;
    do {
        cout << "\nAccount Management Menu:" << endl;
        cout << "1. Open a new account" << endl;
        cout << "2. Display account details" << endl;
        cout << "3. Deposit funds" << endl;
        cout << "4. Withdraw funds" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (numAccounts < MAX_ACCOUNTS) {
                    accounts[numAccounts] = new Account();
                    accounts[numAccounts]->Accept();
                    numAccounts++;
                    cout << "Account created successfully." << endl;
                } else {
                    cout << "Maximum number of accounts reached." << endl;
                }
                break;
            }
            case 2: {
                if (numAccounts == 0) {
                    cout << "No accounts found." << endl;
                } else {
                    cout << "\nAccount Details:" << endl;
                    for (int i = 0; i < numAccounts; i++) {
                        cout << "Account " << i + 1 << ":" << endl;
                        accounts[i]->Display();
                        cout << endl;
                    }
                }
                break;
            }
            case 3: {
                int accountIndex;
                double amount;
                cout << "Enter the account number: ";
                cin >> accountIndex;
                if (accountIndex < 1 || accountIndex > numAccounts) {
                    cout << "Invalid account number." << endl;
                    break;
                }
                cout << "Enter the deposit amount: ";
                cin >> amount;
                accounts[accountIndex - 1]->Deposit(amount);
                break;
            }
            case 4: {
                int accountIndex;
                double amount;
                cout << "Enter the account number: ";
                cin >> accountIndex;
                if (accountIndex < 1 || accountIndex > numAccounts) {
                    cout << "Invalid account number." << endl;
                    break;
                }
                cout << "Enter the withdrawal amount: ";
                cin >> amount;
                if (accounts[accountIndex - 1]->Withdraw(amount)) {
                    cout << "Withdrawal successful." << endl;
                }
                break;
            }
            case 5: {
                cout << "Exiting program..." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (choice != 5);

    // Clean up dynamically allocated accounts
    for (int i = 0; i < numAccounts; i++) {
        delete accounts[i];
    }

    return 0;
}
