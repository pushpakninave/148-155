#include<iostream>
using namespace std;


int FactorialOf(int n){
  if(n<=1){
	return n;
  }
  return n * FactorialOf(n-1);
}   
int main(){
int n;
cout << "Enter number : ";
cin >> n;
int counter = 1;
while(counter <= n){
 cout << FactorialOf(counter) << ", ";
 counter++;
}
}
