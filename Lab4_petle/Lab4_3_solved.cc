#include <iostream>
using namespace std;

int main() {
	int age=0; //Holds age

	cout << "Please provide your age" << endl;
	cin >> age;
	cout << "Age: "<<age<<endl;

	if(age>65)
		cout<< "Welcome to the senior section of our service"<<endl;
	else
	if(age>18&&age<65)
		cout<< "Welcome to the main section of our service"<<endl;
	if(age<18)
		cout<< "Sorry, you are too young for our service"<<endl;
	return 0;
}

