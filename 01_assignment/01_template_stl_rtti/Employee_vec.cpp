#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Employee{
  string uid;
  string name;
  string dept;
  double salary;
  public:
    static int empNo;
    Employee(){
      cout<<"def called"<<endl;
    };
    Employee(string uid,string name,string dept,double salary):uid(uid),name(name),dept(dept),salary(salary){
      cout<<"para called"<<endl;
    }
};
int Employee::empNo=0;
