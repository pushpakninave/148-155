#include<iostream>
using namespace std;

double FindAverage(double *d,int n){
  double sum=0.0;
  for(int i=0;i<n;i++){
    sum=sum+d[i];
  }
  return sum/n;
}

int main(){
  cout << "enter the value of n for number of characters:-"<<endl;
  int n;
  if(!(cin>>n)){
    cout<<"invalid input, please enter valid value for n.";
  }
  double a[n];
  for(int i=0;i<n;i++){
    cout<<"enter the "<<i+1<<" element to calculate average:-"<<endl;
    if(!(cin>>a[i])){
      cout<<"invalid input, exiting";
      return 1;
    }
  }
  cout<<"the average of the entered elemnets is = "<<FindAverage(a,n);
}
