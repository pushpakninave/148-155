#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {
    int choice;
    int n = 0;

    do {
        cout << "Menu:" << endl;
        cout << "1. Enter number of students" << endl;
        cout << "2. Accept student details" << endl;
        cout << "3. Display student details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter number of Students: ";
                cin >> n;
                break;
            case 2:
                for (int i = 0; i < n; i++) {
                    Student std;
                    std.accept();
                }
                break;
            case 3:
                for (int i = 0; i < n; i++) {
                    Student std;
                    std.display();
                }
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}

