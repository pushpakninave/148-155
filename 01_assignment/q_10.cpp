#include<iostream>
using namespace std;

bool isOddorEven(int n){
  return (n%2)==0;
}

//boolean isValidInput(n){
//}

int main(){
  int n;
  cout << "\nPlease enter a number: " << endl;
  cin >> n;
  if (n==0){
    cout << "\nThe input is invalid! Please input a valid number." << endl;
  }
  else if (isOddorEven(n)){
    cout << "\nThe number " << n << " is even." << endl;    
  }else {
    cout << "\n The number " << n << " is odd." <<endl;      
  }
}
