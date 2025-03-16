#include<string>
#include<iostream>
using namespace std;

class Address{
  string area;
  string city;
  string pincode;
  public:
    Address():area(""),city(""),pincode(""){
      cout<<"default adderess ctor called"<<endl;
    }
    Address(string a,string c,string p):area(a),city(c),pincode(p){
      cout<<"parameterized adderess ctor called"<<endl;
    }
};
//we dont show inheritance here we only show association
class Student{
  string rno;
  string name;
  Address permanantAddress;
  Address currentAddress;
  
  public:
    Student():rno(""),name(""),permanantAddress("","",""),currentAddress("","",""){
      cout<<"default student ctor called"<<endl;
    }
    Student(string r,string n,string pa,string pc,string pp,string ca,string cc,string cp)
    :rno(r),name(n),permanantAddress(pa,pc,pp),currentAddress(ca,cc,cp)
    {
      cout<<"parameterized student ctor called"<<endl;
    }
};

int main(){
  Student s1("101","seeta","sivaji nagar","satara","411009","Pasan","Pune","411003");
  Student s2("101","rishu","sivaji nagar","satara","411009","Pasan","Pune","411003");
  Student s3("101","pumpak","sivaji nagar","satara","411009","Pasan","Pune","411003");
  return 0;
}
