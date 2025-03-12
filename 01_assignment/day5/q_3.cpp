#include<iostream>
using namespace std;

int fact(int n){
  int f=1;
  if(n==0){
    return 0;
  }
  else{
    for(int i=1;i<=n;i++){
      f=f*i;
    }
    
    cout<<f<<" ";
  
    n--;
    fact(n);
  }
}

int main(){
  int n;
  cout<<"enter a number to find factorial of :="<<endl;
  if(!(cin>>n)){
    cout<<"invalid input, enter valid n";
    return 1;
  }
  cout << "factorial of "<<n<<" = "<<endl;
  fact(n);
  return 0;
}
