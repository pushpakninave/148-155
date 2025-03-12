//Calculate power of a number
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent:";
    cin >> exponent;
    double result = pow(base, exponent);
    cout << "The result is: " << result << endl;
    return 0;
}
