#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main(){

  // insertion
 /* for(int i=0;i<5;i++){
    v.push_back(i);
  }

  // traversal
  vector<int>::iterator iter = v.begin();
  while(iter != v.end()){
    cout << *iter << ", ";
    iter++;
  }
*/
 //for int vector
 /* vector<int> v;
 int no;
 cout << "\n Enter a number else press 0 to stop" << endl;

 cin >> no;

 while(no!=0){
   v.push_back(no);
   cin >> no;
 }

 vector<int>::iterator it = v.begin();
 int count = 0;
 while(count < v.capacity()){
   no = *it;
   cout << "\n" << no;
   it++;
   count++;
 }
*/
  
// for strings vector
  /*vector<string> v;
  cout<<"\n Capacity: " << v.capacity();
  cout<<"\n Max-size: " << v.max_size();

  string str;
  do{
    cout << "\n Enter string or press 0 to stop:" << endl;
    getline(cin, str);
    v.push_back(str);
  }while(str != "0");

  vector<string>::iterator first = v.begin();
  vector<string>::iterator last = v.end();
  int count = 0;
  while(first!=last){
    cout << "\n string: " << *first << endl;
    *first++;
  }*/

// initialising vector with certain set of values.
  vector<string> v(5, "pushpak");
  /*for(string s : v){
    cout<< s << ", ";
  }*/

  // deep copy of one vector to other
  /*vector<string> vcopy(v);
  cout << "\n :: deep copy vector :: \n"
  for(string s : v){
    cout<< s << ", ";
  }*/


  vector<string>::iterator first = v.begin();
  vector<string>::iterator last = v.end();
  // since size of v = 5 and v/2 = 4, so the iterator go till 2.
  vector<string>::iterator mid = v.begin()+v.size()/2;
  
  cout << "\n list contents :: " << endl;
  list<string> ls(first, mid);
  list<string>::iterator lit = ls.begin();
  while(lit != ls.end()){
    cout << "\n" << *lit;
    *lit++;
  }

  /*cout << "\n dequeue content:: " << endl;
  deque<string> dq(mid, last);
  deque<string>::iterator qubegin = dq.begin();
  while(qubegin != dq.end()){
    cout << "\n" << *qubegin++;
  }

  cout << "\nclearing deque!\n";
  dq.clear();
  qubegin = dq.begin();
  while(qubegin != dq.end()){
    cout << "\n" << *qubegin++;
  }
  */
  // search in list
  cout << "search in list" < endl;
  list<string>::iterator jitor = find(ls.begin(), ls.end(), "pushpak");
  cout << "found :: " << *jitor;
  return 0;
}
