#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n : ";
	cin >> n;
	int curr=n;
	int rev = 0;
	while(n > 0){
		rev = rev * 10 + (n % 10); 
		n = n/10;
	}
	cout << rev << endl;

	if(rev == curr){
		cout << "it is palindrome";
	}else{
		cout << "it is not a palindrome";
	}
	return 0;
}
