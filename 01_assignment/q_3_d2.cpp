// Calulate Simple Intrest usiing principal, rate of interest and period of time
#include<iostream>
using namespace std;

int main(){
	float p, r, t;

	cout<< "enter principal, rate, and year to calc si:" << endl;
	cin>> p >> r >> t;
	float si = (p*r*t)/100;
	cout << "si = " << si << endl;
	return 0;
}

