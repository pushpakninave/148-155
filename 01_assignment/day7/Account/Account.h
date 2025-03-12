#include<string>
using namespace std;

class Account {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Default constructor
    Account();

    // Parameterized constructor
    Account(int accNumber, string accHolderName, double accBalance);

    // Accept function
    void accept();

    // Display function
    void display();

    // Withdraw function
    void withdraw(double amount);

    // Deposit function
    void deposit(double amount);

    // Get account number function
    int getAccountNumber();
};
