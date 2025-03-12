#include <iostream>
using namespace std;

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

int main() {
    double length, width;
    // Get user input for the length and width of the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    // Calculate the area of the rectangle
    double area = calculateRectangleArea(length, width);
    // Display the result
    cout << "The area of the rectangle is: " << area << " square units" << endl;
    return 0;
}
