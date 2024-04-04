#include <iostream>
using namespace std;

int main(){

	bool cont = true;
		int* ptr1;
		ptr1 = new int;

		int* ptr2;
		ptr2 = new int;

		int* ptr3;
		ptr3 = new int;

		cout << "Please enter the first number.";
		cin >> *ptr1;

		cout << "Please enter the second number.";
		cin >> *ptr2;

		cout << "Please enter the third number.";
		cin >> *ptr3;

		cout << "The value of ptr: " << ptr1 << " is: " << *ptr1 << endl;
		cout << "The value of ptr: " << ptr2 << " is: " << *ptr2 << endl;
		cout << "The value of ptr: " << ptr3 << " is: " << *ptr3 << endl;

		delete ptr1;
		delete ptr2;
		delete ptr3;

	return 0;
}
