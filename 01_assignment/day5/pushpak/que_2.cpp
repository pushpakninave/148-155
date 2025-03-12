#include <iostream>
using namespace std;

auto acceptNums(){
	int n;
	cout << "Enter n:";
	int arr[] = new int[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	return arr;
}
void acceptChars(char arr[]){

}
void sortArray(int arr[]){

}
auto findAvg(int arr[]){

}
auto multiply(int arr[]){

}
void display(int arr[]){

}
void displayString(char arr[]){
	
}

void printOptions(){
	cout << "1.Accept, sort and display data:" << endl;
	cout << "2.Accept chars and display string:" << endl;
	cout << "3.Accept, find average and display avg:"<<endl;
	cout << "4.Accept, multiply each by 2 and display:" <<endl;
}
int main(){
	int option;
	do{
		cout << "choose options:" << endl;
		printOptions();
		cin >> option;
		switch(option){
			case 1:{
				int* arr = acceptNums();
				arr = sortArray(arr);
				display(arr);
				break;
			}
			case 2:{
				char* arr = acceptChars();
				displayString(arr);
				break;
			}	
			case 3:{
				int* arr = acceptNums();
				findAvg(arr);
				break;
			}
			case 4:{
				int* arr = acceptNums();
				arr = multiply(arr);
				display(arr);
				break;
			}
			default:{
				cout << "No option selected";
			}
		}
	}while(!option);
}
