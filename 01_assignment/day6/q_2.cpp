#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Employee {
public:
    int empNo;
    string name;
    double salary;
    string dept;

    void accept() {
        cout << "Enter Employee Number: ";
        cin >> empNo;
        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Employee Salary: ";
        cin >> salary;
        cout << "Enter Employee Department: ";
        cin.ignore();
        getline(cin, dept);
    }

    void display() {
        cout << "Employee Number: " << empNo << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
        cout << "Employee Department: " << dept << endl;
    }

    bool operator<(const Employee& other) const {
        if (salary != other.salary) {
            return salary < other.salary;
        } else if (name != other.name) {
            return name < other.name;
        } else {
            return empNo < other.empNo;
        }
    }
};

int main() {
    const int MAX_EMPLOYEES = 100;
    Employee employees[MAX_EMPLOYEES];
    int numEmployees;

    cout << "Enter the number of employees (up to " << MAX_EMPLOYEES << "): ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++) {
        employees[i].accept();
    }

    sort(employees, employees + numEmployees);

    cout << "Sorted Employees:" << endl;
    for (int i = 0; i < numEmployees; i++) {
        employees[i].display();
        cout << endl;
    }

    return 0;
}

