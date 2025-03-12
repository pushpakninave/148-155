#include <iostream>
using namespace std;

// Function to add two numbers
int addNumbers(int a, int b) {
    return a + b;
}

// Function to add two binary numbers
string addBinary(string a, string b) {
    int carry = 0;
    string result = "";
    // Iterate from the least significant bit
    for (int i = a.length() - 1, j = b.length() - 1; i >= 0 || j >= 0 || carry; --i, --j) {
        int sum = carry;
        if (i >= 0){
            sum += a[i] - '0';
        } 
        if (j >= 0){
            sum += b[j] - '0';
        } 
        result = to_string(sum % 2) + result;
        carry = sum / 2;
    }
    return result;
}

// Function to add two characters
char addCharacters(char a, char b) {
    return static_cast<char>(a + b);
}

int main() {
    // Adding two numbers
    int num1 = 10, num2 = 20;
    cout << "Adding two numbers: " << addNumbers(num1, num2) << endl;
    // Adding two binary numbers
    string binary1 = "1010", binary2 = "1100";
    cout << "Adding two binary numbers: " << addBinary(binary1, binary2) << endl;
    // Adding two characters
    char char1 = 'A', char2 = 'B';
    cout << "Adding two characters: " << addCharacters(char1, char2) << endl;
    return 0;
}
