#include<iostream>
using namespace std;

int sortedArray(int *arr,int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n-1-i;j++){
      if(arr[j]>arr[j+1]){
        //int temp=arr[j];
        //arr[j]=arr[j+1];
        //arr[j+1]=temp;
        swap(arr[j],arr[j+1]);
      }
    }
  }
  return 0;
}

int printArray(int *arr, int size){
  cout<<endl;
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}

int main(){
  cout<<"enter the number of elements in the array:-"<<endl;
  int n;
  if(!(cin>>n)){
   cout<<"invalid input, please enter valid size of array.";
   return 1; 
  }
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"enter the element of "<<i<<" number of the array:-"<<endl;
    if(!(cin>>arr[i])){
      cout<<"invalid input, exiting";
      return 1;
    }
  }
  sortedArray(arr,n);
  printArray(arr,n);
}
