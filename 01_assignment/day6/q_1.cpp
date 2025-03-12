#include<iostream>
#include<string>
using namespace std;

struct student{
  string rollno;
  string name;
  
  void Accept(){
    cout<<"enter rollno of student: ";
    cin>>this->rollno;
    cout<<"enter name: ";
    cin>>this->name; 
  }

  void Display(student* s,int n){
    for(int i =0;i<n;i++){
      cout<<"student "<<i+1<<" : rollno- "<<s[i].rollno<<" name - "<<s[i].name;
    }
  }  
};

int main(){
  
}

