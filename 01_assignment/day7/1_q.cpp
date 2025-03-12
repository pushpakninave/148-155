#include <iostream>
#include <string>
using namespace std;

class Account {
    private:
    int accountNumber;
    string accountHolderName;
    double balance;

    public:
    // Default constructor
    Account(): accountNumber(0),accountHolderName("Unknown"),balance(0.0){
        cout << "Default constructor called. This pointer: " << this << endl;
    }

    // Parameterized constructor
    Account(int accNumber, string accHolderName, double accBalance) {
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        balance = accBalance;
        cout << "Parameterized constructor called. This pointer: " << this << endl;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    // Accept function
    void accept() {
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter account holder name: ";
        cin.ignore();
        getline(cin, accountHolderName);
        cout << "Enter initial balance: ";
        cin >> balance;
        cout << "Accept function called. This pointer: " << this << endl;
    }

    // Display function
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
        cout << "Display function called. This pointer: " << this << endl;
    }

    // Withdraw function
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    // Deposit function
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }
};

int main() {
    Account* accounts = new Account[100];
    int numAccounts = 0;

    while (true) {
        cout << "\nAccount Management System" << endl;
        cout << "1. Create new account" << endl;
        cout << "2. Display account details" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Deposit" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:{
                accounts[numAccounts] = Account();
                accounts[numAccounts].accept();
                numAccounts++;
                break;
                }
            case 2:{
                cout << "Enter account number: ";
                int accountNumber;
                cin >> accountNumber;
                bool found = false;
                for (int i = 0; i < numAccounts; i++) {
                    if (accounts[i].getAccountNumber() == accountNumber) {
                        accounts[i].display();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Account not found." << endl;
                }
                break;
                }
            case 3:{
                int accno;
                bool found;
                cout << "Enter account number: ";
                cin >> accno;
                found = false;
                for (int i = 0; i < numAccounts; i++) {
                    if (accounts[i].getAccountNumber() == accno) {
                        cout << "Enter withdrawal amount: ";
                        double withdrawalAmount;
                        cin >> withdrawalAmount;
                        accounts[i].withdraw(withdrawalAmount);
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Account not found." << endl;
                }
                break;
                }
            case 4:
              int accno;
              bool found;
                cout << "Enter account number: ";
                cin >> accno;
                found = false;
                for (int i = 0; i < numAccounts; i++) {
                    if (accounts[i].getAccountNumber() == accno) {
                        cout << "Enter deposit amount: ";
                        double depositAmount;
                        cin >> depositAmount;
                        accounts[i].deposit(depositAmount);
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Account not found." << endl;
                }
                break;
            case 5:
                cout << "Exiting..." << endl;
                delete[] accounts;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
