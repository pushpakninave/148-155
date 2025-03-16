#include<iostream>
#include <ostream>
#include<string>
#include<limits>
#include<vector>

using namespace std;

class Emp{
  string eid;
  string name;
  string address;
  string salary;
  public:
    // Emp():eid(""),name(""),address(""),salary(""){
    //   cout<<"default ctor of emp called"<<endl;
    // }
    Emp(string i,string n,string a,string s)
    :eid(i),name(i),address(a),salary(s){
      cout<<"parameterized ctor called"<<endl;
    }
    void accept(){
      cout<<"enter eid"<<endl;
      cin.ignore();
      getline(cin,eid);
      cout<<"enter name"<<endl;
      //cin.ignore();
      getline(cin,name);
      cout<<"enter address"<<endl;
      //cin.ignore();
      getline(cin,address);
      cout<<"enter salary"<<endl;
      //cin.ignore();
      getline(cin,salary);
    }
    void display(){
      cout<<"eid of "<<this<<" is "<<eid<<endl;
      cout<<"name of "<<this<<" is "<<name<<endl;
      cout<<"address of "<<this<<" is "<<address<<endl;
      cout<<"salary of "<<this<<" is "<<salary<<endl;
      cout<<"----------"<<endl;
    }
    string getEid(){
      return this->eid;
    }
    string getName(){
      return this->name;
    }
    string getAddress(){
      return this->address;
    }
    string getSalary(){
      return this->salary;
    }
    // bool operator<(Emp &a){
    //   return this->getEid()<a.getEid();
    // }
};

int main(){
  Emp a("1","a","b","c");
  int n;
  vector<Emp> e;
  do{
    cout<<"---MENU DREVEN PRGM---"<<endl;
    cout<<"enter your choice"<<endl;
    cout<<"1 add record"<<endl;
    cout<<"2 display all"<<endl;
    cout<<"3 search"<<endl;
    cout<<"4 delete"<<endl;
    cout<<"5 modify"<<endl;
    cout<<"6 or else for exit"<<endl;
    if(!(cin>>n)){
      cout<<"invalid input";
      return 1;
    }
    switch(n){
      case 1:
        {
          cout<<"enter details"<<endl;
          a.accept();
          e.push_back(a);
        }break;
    case 2:
      {
        cout<<"display"<<endl;
        for(int i=0;i<e.size();i++){
          e[i].display();
        }
      }break;
    case 3:
      {
        cout<<"search"<<endl;
        cout<<"enter detals of eid for search - "<<endl;
        string ei;
        cin.ignore();
        if(!(getline(cin,ei))){
          cout<<"invalid input"<<endl;
          break;
        }
        for(int i=0;i<e.size();i++){
          if((e[i].getEid()).compare(ei)){
            cout<<"found at "<<e[i].getEid();
            cout <<endl;
          }else if((e[i].getEid()).compare(ei)!=0 && i==e.size()-1){
            cout<<"not found"<<endl;
          }
        }
      }break;
    case 4: 
      {
        cout<<"delete"<<endl;
        cout<<"enter details of eid for delete - "<<endl;
        string ei;
        cin.ignore();
        if(!(getline(cin,ei))){
          cout<<"invalid input"<<endl;
          break;
        }
        bool found = false;
        for(int i=0;i<e.size();i++){
          if((e[i].getEid()).compare(ei)==0){
            cout<<"deleted "<<endl;
            e.erase(e.begin() + i);
            found = true;
            break;
          }
        }
        if(!found){
            cout<<"eid not found"<<endl;
        }
      }break;
    case 5:
      {
        cout<<"modify"<<endl;
        cout<<"enter detals of eid for modify - ";
        string ei;
        cin.ignore(); 
        // if(!(getline(cin,ei))){
        //   cout<<"invalid input"<<endl;
        //   break;
        // }
        getline(cin,ei);
        bool found = false;
        for (int i = 0; i < e.size(); i++)
        {
          if (e[i].getEid() == ei)
          {
            cout << "found at " << e[i].getEid();
            e[i].accept();
            found = true;
            break;
          }
        }
        if (!found)
        {
          cout << "eid not found" << endl;
        }      
      }break;
      case 6:{cout<<"exiting..."<<endl;}
        break;
      default:{cout<<"invalid input";}
    }
  }while(n!=6);
  return 0;
}

