
// Example to explain how the reference operator works
// This example will further explain that each variable has its own mamory loaction  

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int a = 10;
    int b = 10;
    // This will simply print out the values i.e., "10"
	cout << "Value stored in a is : " << a << endl;
	cout << "Value stored in b is : " << b << endl;

	cout << endl;
    // This will print the exect memory address of these variables
	cout << "The address of a is : " << &a << endl;
	cout << "The address of b is : " << &b << endl;

	_getch();
	return 0;
}