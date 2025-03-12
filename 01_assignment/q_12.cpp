#include<iostream>
using namespace std;
int main(){
char ch;
cout << "Enter character\n";
cin >> ch;
int dec = (int)ch;
cout << ch;
if(dec >= 65 && dec <= 90){
cout << " is uppercase\n" << endl;
}else if(dec >= 97 && dec <= 122){
cout << " is lowercase\n" << endl;
}
}
