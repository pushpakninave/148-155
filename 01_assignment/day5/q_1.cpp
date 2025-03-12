#include<iostream>
using namespace std;

int swap(int *a,int *b){
  int temp=a;
  b=a;
  a=temp;
  return 0;
}

int main(){
  int a,b;
  cout<<"enter 2 no.s for swapping:- "<<endl;
  if(!(cin>>a>>b)){
    cout<<"invalid input, please enter only 2 integers"<endl;
  }
  cout<<"before swapping: a= "<<a<<" b = "<<b<<endl;
  swap(&a,&b);
  cout<<"after swapping : a= "<<a<<" b = "<<b<<endl;
}
