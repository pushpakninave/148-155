#include<iostream>
using namespace std;

int main(){
  cout << "enter the value of n for number of characters:-"<<endl;
  int n;
  if(!(cin>>n)){
    cout<<"invalid input, please enter valid value for n.";
  }
  char a[n];
  for(int i=0;i<n;i++){
    cout<<"enter the "<<i+1<<" charcter to make a string:-"<<endl;
    if(!(cin>>a[i])){
      cout<<"invalid input, exiting";
      return 1;
    }
  }
  cout<<"the sting is:"<<endl;
  for(int i=0;i<n;i++){
    cout<<a[i];
  }
  cout<<endl;
}
