#include "Account.h"
#include <iostream>
using namespace std;

// Default constructor
Account::Account() :accountNumber(0), accountHolderName("Unknown"), balance(0.0){
    cout << "Default constructor called. This pointer: " << this << endl;
}

// Parameterized constructor
Account::Account(int accNumber, string accHolderName, double accBalance) {
    accountNumber = accNumber;
    accountHolderName = accHolderName;
    balance = accBalance;
    cout << "Parameterized constructor called. This pointer: " << this << endl;
}

// Accept function
void Account::accept() {
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
void Account::display() {
    cout << "Account Number: " << accountNumber << endl;
    cout << "Account Holder Name: " << accountHolderName << endl;
    cout << "Balance: " << balance << endl;
    cout << "Display function called. This pointer: " << this << endl;
}

// Withdraw function
void Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        cout << "Withdrawal successful. New balance: " << balance << endl;
    } else {
        cout << "Insufficient balance." << endl;
    }
}

// Deposit function
void Account::deposit(double amount) {
    balance += amount;
    cout << "Deposit successful. New balance: " << balance << endl;
}

// Get account number function
int Account::getAccountNumber() {
    return accountNumber;
}
