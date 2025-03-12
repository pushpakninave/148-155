#include <iostream>

using namespace std;

class Complex {
private:
    float real;
    float img;
    static int c;

public:
    // Constructor
    Complex(float r = 0.0, float i = 0.0) : real(r), img(i) {
        c++;
    }

    // Destructor
    ~Complex() {
        c--;
    }

    // Overloaded operators
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, img + other.img);
    }

    Complex operator-(const Complex& other) {
        return Complex(real - other.real, img - other.img);
    }

    Complex operator*(const Complex& other) {
        return Complex(real * other.real - img * other.img,
                       real * other.img + img * other.real);
    }

    // Accept function
    void accept() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> img;
    }

    // Display function
    void display() {
        cout << real << " + " << img << "i" << endl;
    }

    // Static member function
    static int getCount() {
        return c;
    }
};

int Complex::c = 0;

int main() {
    int choice;
    Complex c1, c2, result;

    do {
        cout << "Menu:" << endl;
        cout << "1. Accept Complex Numbers" << endl;
        cout << "2. Add Complex Numbers" << endl;
        cout << "3. Subtract Complex Numbers" << endl;
        cout << "4. Multiply Complex Numbers" << endl;
        cout << "5. Display Complex Numbers" << endl;
        cout << "6. Display Number of Complex Objects" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter first complex number:" << endl;
                c1.accept();
                cout << "Enter second complex number:" << endl;
                c2.accept();
                break;
            case 2:
                result = c1 + c2;
                cout << "Result: ";
                result.display();
                break;
            case 3:
                result = c1 - c2;
                cout << "Result: ";
                result.display();
                break;
            case 4:
                result = c1 * c2;
                cout << "Result: ";
                result.display();
                break;
            case 5:
                cout << "First complex number: ";
                c1.display();
                cout << "Second complex number: ";
                c2.display();
                break;
            case 6:
                cout << "Number of Complex objects: " << Complex::getCount() << endl;
                break;
            case 7:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 7);

    return 0;
}
