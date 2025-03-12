#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
using namespace std;


double AreaOfCircle(double r){
  const double PI = M_PI; 
  return 2*PI*r*r;
}

double AreaOfRectangle(double l, double b){
  return l*(float)b;
}

double AreaOfSquare(double s){
  return s*(float)s;
}

int main(){
  int ch;
  do{ 
    cout << "\nPlease input your choice for calculating the result:" << endl;
    cout << "To calculate area of Circle input: 1" << endl;
    cout << "To calculate area of Rectangle input: 2" << endl;
    cout << "To calculate area of Square input: 3" << endl;
    cout << "To exit, Please enter: 0" << endl;
    cin >> ch;

  switch(ch){
    case 0 : {
        break;
      }
    case 1 : {
        double r;
        cout << "\nPlease enter the radius of the Circle:" << endl;
        cin >> r;
        cout << "Area of Circle is: " << AreaOfCircle(r) << "\n" << endl; 
      }break;

    case 2 : {
        double l,b;
        cout << "\nPlease enter the length of the Rectangle:" << endl;
        cin >> l;
        cout << "\nPlease enter the breath of the Rectangle:" << endl;
        cin >> b;
        cout << "Area of Rectangle is: " << AreaOfRectangle(l,b) << "\n" << endl; 
      }break;

      
    case 3 : {
        double s;
        cout << "\nPlease enter the length of the side of Square:" << endl;
        cin >> s;
        cout << "Area of Square is: " << AreaOfSquare(s) << "\n" << endl; 
      }break;

    default: cout << "\n Invalid Input! Please enter a valid choice."; 
  }
  }while(ch!=0);
  return 0;
}
