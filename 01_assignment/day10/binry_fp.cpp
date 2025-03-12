/*
 * Write a program to copy binary file to binary file. Specifically
 * large music files.
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <istream>
#include <fstream>
#include <bitset>
using namespace std;

int main(){
  //while(true){
    cout << "Enter music filename: " << endl;
    char source_file[50];
    cin >> source_file; 
    char dest_file[50];
    cin >> dest_file;
   
    // open filename
    ifstream fin;
    ofstream fout;
    fin.open(source_file, ios::binary);
    fout.open(dest_file, ios::binary);
    if(!fin){
      cout << "File not found" << endl;
      return -1;
    }

    // cout << filesize(source_file)``
    int buffersize = 6000;
    char bufferArray[buffersize];
    while(fin.read(bufferArray, buffersize)){
// temp = fin.read(bufferArray, buffersize);
   unsigned char byte = static_cast<unsigned char>(bufferArray[0]);
        // Print the byte in binary format
        cout << bitset<8>(byte) << " "; // Print as 8 bits     cout << temp;
        fout.write(bufferArray, fin.gcount()); 
    }
    
    fout.write(bufferArray, fin.gcount()); 
  //}
  return 0;
}

