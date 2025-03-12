#include <iostream>
using namespace std;

struct Student{
	char name[30];
	int rollNo;
};

void accept(Student std[], int n){
	for(int i=0;i<n;i++){
		cout << "Enter name of student-" << i+1 << ":";
		cin >> std->name;
		cout << "Enter rollNo of student-"<< i+1 << ":";
		cin >> std->rollNo;
		cout << endl;
	}
}
void display(Student std[], int n){	
	for(int i=0;i<n;i++){
		cout << "name of student-" << i+1 << ":" << std->name << endl;
		cout << "rollNo of student-"<< i+1 << ":" << std->rollNo << endl;
		cout << endl;
	}
}
int main(){
	int n;
	cout << "Enter number of students: ";
	cin >> n;
	//Student list[n];
	Student* list = new Student[n];
	accept(list, n);
	display(list, n);
	cout << "works"<< endl;
	return 0;
}
