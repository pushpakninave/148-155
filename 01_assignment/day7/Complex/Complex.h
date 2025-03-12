#include<iostream>
using namespace std;

class Complex{
  private:
    int real;
    int img;
   // static int c;
    public:
Complex();
Complex(int real, int img);
void accept();
void display();
int getreal();
int getimg();
};
