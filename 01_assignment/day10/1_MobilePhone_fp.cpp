#include <fstream>
#include <iomanip>
#include<cstring>
#include<string>
#include<iostream>
#include <ostream>
//Create MobilePhone class with serialNo, modelNo, brandName
//and price.
//Write menu driven program with below options
//1. Add /write MobilePhone to file
//2. Read all Mobile phones from file and store them in an array
//3. Read all Mobile phones from file and store them in an array and
//display sorted by price.

using namespace std;

static int count=0;

class MobilePhone{
  private:
    int serialNo;
    int modelNo;
    char brandName[50];
    double price;
  public:
    MobilePhone():serialNo(0),modelNo(0),brandName("XXX"),price(0){
      count++;
    }
    MobilePhone(int serN,int modN,char bNam[50],double pr){
      serialNo = serN;
      modelNo = modN;
      strcpy(brandName , bNam);
      price = pr;
      count++;
    }
    void accept(){
      cout<<"enter serial no.- "<<endl;
      cin>>serialNo;
      cout<<"enter model no.- "<<endl;
      cin>>modelNo;
      cout<<"enter brand name-"<<endl;
      cin.ignore();
      cin.getline( brandName ,50);
      cout<<"enter price- "<<endl;
      cin>>price;
    }
    void display(){
      cout<<"mobile details - "<<endl;
      cout<<"serial no. - "<<serialNo<<endl;
      cout<<"brand name - "<<brandName<<endl;
      cout<<"price - "<<price<<endl;
    }
    int toFile(){
      ofstream fout;
      fout.open("jiru.txt",ios::app);
      if(!fout)
    	{
	       cout<<"\n unable to open file"<<endl;
	       return 1;
     	}
     	while(count!=0){
     	  try{
     	    fout<<"obj "<<count<<" ";
          fout<<"mobile details - "<<" ";
          fout<<"serial no. - "<<serialNo<<" ";
          fout<<"brand name - "<<brandName<<" ";
          fout<<"price - "<<price<<" "<<endl;
     	  }catch(int e){
     	    cout<<e<<endl;
     	  }
     	}
     	return 0;
    }
};
string* readFile(){
  ifstream fin;
  fin.open("jiru.txt");
  if(!fin){
       cout<<"\n unable to open file"<<endl;
  }
  string str;
  int n=sizeof(MobilePhone)*count;
  string strArry[n];
  int i=0;
  while(fin)
	{
	  getline(fin,str);
	  cout<<str;
	  strArry[i]=str;
	  i++;
	}
	return strArry;
}
MobilePhone* sortedPrice(){
  
}
