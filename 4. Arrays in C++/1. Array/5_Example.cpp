
/*
	Program in C++ to copy the elements of one array into another array and then display the elements of the second array.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int a[5],b[5]; // integer array "a" of size 5 and "b" of size 5

	for (int i = 0; i <= 4; i++) {
		// Taking the input from the user
		cout << "Value at [" << i << "] = ";
		cin >> a[i];
	}

	cout << "\n--------------------------\n\n";

	for (int i = 0; i <= 4; i++) {
		// Copying the elements of array "a" into array "b"
		b[i]= a[i];
		cout << "Value at [" << i << "] = " << b[i] << endl; // Displaying the elements of array "b"
	}
	
	_getch();
	return 0;
}