#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate compound interest
double calculateCompoundInterest(double principal, double rate, double time, int compoundPeriods) {
    double amount = principal * pow(1 + (rate / compoundPeriods), compoundPeriods * time);
    return amount;
}

int main() {
    double principal, rate, time;
    int compoundPeriods;
    // Get user input
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the annual interest rate (as a decimal): ";
    cin >> rate;
    cout << "Enter the time period (in years): ";
    cin >> time;
    cout << "Enter the number of compound periods per year: ";
    cin >> compoundPeriods;
    // Calculate the compound interest
    double compoundInterest = calculateCompoundInterest(principal, rate, time, compoundPeriods);
    // Display the result
    cout << "The final amount after compound interest is (in Rupees): " << compoundInterest << endl;
    return 0;
}
