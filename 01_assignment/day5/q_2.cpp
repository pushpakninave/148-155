#include<iostream>
using namespace std;

int PrintArr(int a[],int n){
  for(int i=0;i<n;i++){
    cout<<a[i]<<" , ";
  }
  cout<<endl;
  return 0;
}

int main(){
  int n;
  cout<<"enter n for number of students:="<<endl;
  if(!(cin>>n)){
    cout<<"invalid input, please enter valid value for n.";
    return 1;
  }
  int a[n];
  for(int i=0;i<n;i++){
    cout<<"enter details of student:-"<<i+1<<" (some number)"<<endl;
    if(!(cin>>a[i])){
      cout<<"invalid input, please enter valid input";
      return 1;
    }
  }
  PrintArr(a,n);
}
