#include<iostream>
#include<string>
#include<stdexcept>

using namespace std;

class Account {
private:
    string accno;
    string name;
    double balance;

public:
    // Constructor to initialize the members
    Account(string accno, string name, double balance) : accno(accno), name(name), balance(balance) {}

    // Function to accept the details of the account
    void accept() {
        cout << "Enter account number: ";
        cin >> accno;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter balance: ";
        cin >> balance;
    }

    // Function to display the details of the account
    void display() const {
        cout << "Account Number: " << accno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    // Function to deposit an amount
    void deposit(double amount, const string& pancard) {
        try {
            if (amount >= 50000) {
                balance += amount;
                cout << "Amount deposited successfully." << endl;
            } else {
                throw invalid_argument("Deposit amount must be at least 50000.");
            }
        } catch (const invalid_argument& e) {
            cout << "Error: " << e.what() << endl;
        }
    }

    // Function to withdraw an amount
    void withdraw(double amount, const string& pancard) {
        try {
            if (amount < 1000) {
                if (balance >= amount) {
                    balance -= amount;
                    cout << "Amount withdrawn successfully." << endl;
                } else {
                    throw runtime_error("Insufficient balance.");
                }
            } else {
                throw invalid_argument("Withdrawal amount must be less than 1000.");
            }
        } catch (const invalid_argument& e) {
            cout << "Error: " << e.what() << endl;
        } catch (const runtime_error& e) {
            cout << "Error: " << e.what() << endl;
        }
    }
};

int main() {
    Account acc("12345", "John Doe", 100000);
    acc.display();

    string pancard = "ABCDE1234F";
    acc.deposit(60000, pancard);
    acc.display();

    acc.withdraw(500, pancard);
    acc.display();

    return 0;
}