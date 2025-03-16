// Write swap, add, subtract, multiplication and division functions
// using template.
#include<iostream>
#include <locale>
using namespace std;

template <class T>
class Swap{
  int a,b;
  public:
    Swap(T a, T b){
      this->a=a;
      this->b=b;
      cout<<"ctor"<<endl;
    }
    void sswap(T &a,T &b){
      T temp=a;
      a=b;
      b=temp;
      cout<<"after swapping - \n";
      cout<<"a="<<a<<endl;
      cout<<"b="<<b<<endl;
    }
    void add(){
      cout<<a+b<<"<- a+ b"<<endl;
    }
    void subtract(){
      cout<<a-b<<"<- a- b"<<endl;   
    }
    void mul(){
      cout<<a*b<<"<- a* b"<<endl;   
    }
    void div(){
      cout<<a/b<<"<- a/ b"<<endl;   
    }
};
int main(){
  Swap<int> ij(5,6);
  ij.add();
  ij.subtract();
  ij.mul();
  ij.div();
}
