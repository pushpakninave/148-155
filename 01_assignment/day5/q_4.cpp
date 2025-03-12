#include<iostream>
using namespace std;

int revStrArr(char *a,int i,int n){
  if(i==n){
    return 0;
  }
  char temp = a[i];
  revStrArr(a,i+1,n);
  cout<<temp;
  return 0;
}

int main(){
  cout<<"enter n for the charactrer array:="<<endl;
  int n;
  if(!(cin>>n)){
    cout<<"invalid input please enter valid n"<<endl;
    return 1;
  }
  char a[n];
  for(int i =0;i<n;i++){
    cout<<"enter the value of a["<<i<<"] - "<<endl;
    if(!(cin>>a[i])){
      cout<<"invalid input, exiting";
      return 1;
    }
  }
  n=size_t(a)/size_t(a[0]);
  revStrArr(a,0,n);
  return 0;
}
