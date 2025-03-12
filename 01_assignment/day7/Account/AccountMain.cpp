#include <iostream>
#include "Account.h"

using namespace std;

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
