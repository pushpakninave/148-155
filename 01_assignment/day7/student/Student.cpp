#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

Student::Student():name(""), rollNo(""), percentage(0.0f){
  cout << "Default ctor called with " << this << endl;
}

Student::Student(string name, string rollNo, float percentage):name(name), rollNo(rollNo), percentage(percentage){
  cout << "Parameterized constructor called: " << this << endl;
  cout << "Student name: " << name << endl;
  cout << "Student roll no.: " << rollNo << endl;
  cout << "Student percentage: " << percentage << endl;
}

void Student::accept(){
  cout << "Enter Student Details: " << endl;
  cout << "Enter Student Name: ";
  cin.ignore();
  getline(cin, name);
  cout << "Enter Student Roll no: ";
  getline(cin, rollNo);
  cout << "Enter Student percentage: ";
  cin >> percentage;
  cout << endl;
}

void Student::display(){ 
  cout << "Student Details: " << endl;
  cout << "Student Name: " << name << endl;
  cout << "Student Roll no: " << rollNo << endl;
  cout << "Student percentage: " << percentage << endl;
  cout << endl;
}
