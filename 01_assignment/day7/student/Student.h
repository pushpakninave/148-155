
#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

#include <iostream>
#include <string>

class Student{
  private:
    string name;
    string rollNo;
    float percentage;

  public:
    Student();
    Student(string name, string rollNo, float percentage);
    string getName();
    string getRollNo();
    virtual void accept();
    virtual void display();

};

#endif // !STUDENT_H
