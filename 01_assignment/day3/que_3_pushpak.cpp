#include<iostream>
using namespace std;

int main(){

	int n = 5;

	for(int i=0;i<=10;i++){
		for(int j=0;j<=2*n;j++){
			if(i > 0){
			int r = (2*n)%i;
			if(j>=(n-r) && j<=(n+r)){
				cout<<" ";
			}else{
				cout<<"*";
			}
			}
			
		}
		cout << "\n";
	}
 	return 0;
}
