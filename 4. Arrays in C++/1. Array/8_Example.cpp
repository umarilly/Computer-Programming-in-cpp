
/*
	Program in C++ to demonstrate the use of const keyword in array.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	const int size = 20; // constant integer size of 20
	int a[size]; // integer array "a" of size 20

	for (int i = 0; i < 9; i++) {
		// Taking the input from the user
		cout << "Value at [" << i << "] = ";
		cin >> a[i];
	}
	
	cout << "\n--------------------------\n\n";
	
	for (int i = 0; i < 9; i++) {
		// Displaying the elements of the array
		cout << "Value at [" << i << "] = " << a[i] << endl;
	}
	
	_getch();
	return 0;
}