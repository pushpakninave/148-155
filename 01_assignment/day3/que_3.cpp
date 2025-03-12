#include<iostream>
using namespace std;

int main(){
  cout<< "enter rows:";
  int n;
  cin>>n;


  for(int i=0;i<n;i++){
    for(int j=0;j<=n-i;j++){
      cout<< "*";
    }
      for(int j=0;j<2*i;j++){
        cout<<" ";
      }
      for(int j=0;j<n-i;j++){
        cout<<"*";
      }
      cout<<endl;
  }
  for(int i=1;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<"*";
    }
    for(int j=0;j<2*(n-i-1);j++){
      cout<<" ";
    }
    for(int j=0;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }



    
    cout<<"filled diamond:"<<endl;
        for (int i = 1; i <= n; i++) {
        // Print the leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print the stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Print the lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print the leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print the stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
    
}
