#include<iostream>
#include "Complex.h"

Complex::Complex():real(0),img(0){
  cout<<"calling default const"<<this<<endl;
}
Complex::Complex(int r, int i){
  this->real=r;
  this->img=i;
  //this->c=c; 
 // cout<<"call para ctor "<<this<<endl;
}
void Complex::accept(){
  cout<<"enter real part"<<endl;
  cin>>this->real;
  cout<<"enter img part"<<endl;
  cin>>this->img;
}
void Complex::display(){
  cout<<"real "<<this->real<<endl;
  cout<<"img "<<this->img<<" i"<<endl;
 // cout<<"c "<<this->c<<endl;
}
int Complex::getimg(){
  return this->img;
}
int Complex::getreal(){
  return this->real;
}
