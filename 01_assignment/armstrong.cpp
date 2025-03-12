#include<iostream>
using namespace std;

int main(){
int n;
cout<< "Enter number : ";
cin >> n;
int x = n;
int y = 0;

while(n > 0){
 int m = n%10;
	y+= (m*m*m);
 n/=10;
}

if(y == x){
	cout<< "it is armstrong";
}else{
	cout<< "it is not armstrong";
}
}
