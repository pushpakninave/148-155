#include <iostream> 
#include <string>

// Try passing const reference to factorial function and check if modification is possible.
using namespace std;

int factorial(int const &n){

  /*n = 10;
   if(n == 1){
      return n;
   }
   return n * factorial(n-1);
  */

  int factorial=1;
  
  while(n!=1){
    factorial*=n;
    n=n-1;
  }

  return factorial;
}

int main(){
  cout << "Enter number: ";
  int n;
  cin >> n;
  cout << "factorial : " << factorial(5);
}
