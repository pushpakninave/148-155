#include <iostream>
#include <string>
using namespace std;

struct Student {
    string student_id;
    string first_name;
    string last_name;
    int age;
    char gender;
    string branch;
    string address;
    float cgpa;
};

// Function to print the details of a student
int Display(const Student* const student) {
    cout << "Student ID: " << student->student_id << endl;
    cout << "First Name: " << student->first_name << endl;
    cout << "Last Name: " << student->last_name << endl;
    cout << "Age: " << student->age << endl;
    cout << "Gender: " << student->gender << endl;
    cout << "Branch: " << student->branch << endl;
    cout << "Address: " << student->address << endl;
    cout << "CGPA: " << student->cgpa << endl;
    return 0;
}

// Function to input the details of a student
int Accept(Student* const student) {
    cout << "Enter student ID: ";
    getline(cin, student->student_id);
    if (student->student_id.length() != 10) {
        cout << "Invalid input, please enter a valid student ID" << endl;
        return 1;
    }

    cout << "Enter first name: ";
    getline(cin, student->first_name);
    if (student->first_name.length() > 50) {
        cout << "Invalid input, please enter a valid first name" << endl;
        return 1;
    }

    cout << "Enter last name: ";
    getline(cin, student->last_name);
    if (student->last_name.length() > 50) {
        cout << "Invalid input, please enter a valid last name" << endl;
        return 1;
    }

    cout << "Enter age: ";
    if (!(cin >> student->age) || student->age < 0) {
        cout << "Invalid input, please enter a valid age" << endl;
        cin.clear();
        return 1;
    }

    cout << "Enter gender (M/F/O): ";
    cin >> student->gender;
    if (student->gender != 'M' && student->gender != 'F' && student->gender != 'O') {
        cout << "Invalid input, please enter valid input" << endl;
        cin.clear();
        return 1;
    }

       cout << "Enter branch: ";
    getline(cin, student->branch);
    if (student->branch.length() > 50) {
        cout << "Invalid input, please enter a valid branch" << endl;
        return 1;
    }

    cout << "Enter address: ";
    getline(cin, student->address);
    if (student->address.length() > 100) {
        cout << "Invalid input, please enter a valid address or check the length is below 100 characters" << endl;
        return 1;
    }

    cout << "Enter CGPA: ";
    if (!(cin >> student->cgpa) || student->cgpa < 0 || student->cgpa > 10) {
        cout << "Invalid input, please enter a valid CGPA" << endl;
        cin.clear();
        return 1;
    }

    return 0;
}

int main() {
    Student student;
    Accept(&student);
    Display(&student);
    return 0;
}
