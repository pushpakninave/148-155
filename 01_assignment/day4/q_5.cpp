#include <iostream>
using namespace std;

//int sortedArray(int *arr,int n){
  //for(int i=0;i<n;i++){
    //for(int j=0;j<n-1-i;j++){
      //if(arr[j]>arr[j+1]){
        //swap(arr[j],arr[j+1]);
      //}
    //}
  //}
  //return 0;
//}
int Minarr(int a[],int n){
  int min=a[0];
  for(int i=1;i<n;i++){
    if(min>a[i]){
      min=a[i];
    }
  }
  return min;
}


int Maxarr(int a[],int n){
  int max=a[0];
  for(int i=1;i<n;i++){
    if(max<a[i]){
      max=a[i];
    }
  }  
  return max;
}

int SecMax(int a[],int n){
  int max=Maxarr(a,n);
  int smax=a[0];
  for(int i =1;i<n;i++){
    if(a[i]>smax && a[i]<max){
      smax=a[i];
    }
  }
  return smax;
}

int SecMin(int a[],int n){
 
int min=Minarr(a,n);
  int smin=a[0];
  for(int i =1;i<n;i++){
    if(smin>a[i] && a[i]>min){
      smin=a[i];
    }
  }
  return smin;
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
  //sortedArray(arr,n);
  cout<<"Max= "<<Maxarr(arr,n)<<"Min= "<<Minarr(arr,n)<<endl;
  cout<<"secMax= "<<SecMax(arr,n)<<"secMin= "<<SecMin(arr,n)<<endl;
  printArray(arr,n);
}


