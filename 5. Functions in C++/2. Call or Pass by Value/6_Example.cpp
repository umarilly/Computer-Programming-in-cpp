
/*
	Program in C++ to demonstrate call by value.
*/

#include<iostream>
#include<conio.h>

using namespace std;

// Function to demonstrate call by value
void foo (int  value) {
	value = 9;
}

int main() {

	int value = 3;
	foo(value); // value is passed by value
	// The value of 'value' remains unchanged
	cout << "The value is : " << value << endl;

	_getch();
	return 0;
}