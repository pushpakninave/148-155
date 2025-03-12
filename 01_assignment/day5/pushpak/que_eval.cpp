#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter n: "<<endl;
	if(!(cin >> n)){
		cout<<"Invalid input, please enter correct value of n"<<endl;
		return 1;
	}
	
	int temp;
	while(n > 10){
		int sum = 0;
		while(n!=0){
			sum+=n%10;
			n=n/10;
		}
		n = sum;
		cout << "Per n: " << n<<endl;
	}

	cout <<"Finally Reduced to "<< n << endl;
}
