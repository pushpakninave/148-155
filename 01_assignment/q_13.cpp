#include<iostream>

using namespace std;

int FindSumRecursively(int n){
	if(n <= 1){
		return n;
	}
	return n + FindSumRecursively(n-1);
}
int main(){
   int n;
   cout << "Enter number: ";
   cin >> n;

   cout << "sum of " << n << " : " << FindSumRecursively(n);
	
}
