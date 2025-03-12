#include<iostream>
#include"Complex.cpp"
using namespace std;

int main(){
  Complex* com=new Complex[2];
  com[1].accept();
  com[1].display();
  com[2].accept();
  com[2].display();
  return 0;
}
