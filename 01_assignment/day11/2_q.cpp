// Create and Array class and apply class template to it. Try storing
// int, float char data by creating different objects of an array class.

#include<iostream>
using namespace std;

template<class T>
class Array{
  int i=0;
  T *a;
  public:
    Array(int s):i(s){
      cout<<"ctor"<<endl;
      this->a=new T[s];
    }
    Array(const Array& x){
      cout<<"cpy ctor"<<endl;
      this->i=x.i;
      this->p=new T[this->i];
      for(int i=0;i<this->i;)
    }
};
