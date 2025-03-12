#include<iostream>
using namespace std;

int PrintMulbyTwo(int *a,int n){
  int sum=0;
  cout<<"elements multiplied by two are:="<<endl;
  for(int i=0;i<n;i++){
    cout<<a[i]*2<<" ,";
    sum=sum + a[i]*2;
  }
  cout<<"sum of all multiplied res= "<<sum;
  return 0;
}

int main(){
  cout << "enter the value of n for total numbers for multiplication by 2:-"<<endl;
  int n;
  if(!(cin>>n)){
    cout<<"invalid input, please enter valid value for n.";
  }
  int a[n];
  for(int i=0;i<n;i++){
    cout<<"enter the "<<i+1<<" number for multiply by 2:-"<<endl;
    if(!(cin>>a[i])){
      cout<<"invalid input, exiting";
      return 1;
    }
  }
  PrintMulbyTwo(a,n);
  cout<<endl;
}
