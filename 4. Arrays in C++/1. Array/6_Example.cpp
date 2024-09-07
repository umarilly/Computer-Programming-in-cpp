
/*
	Program in C++ to find the largest element in an array.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	// Taking input from the user for the number of elements in the array
	int n;
	cout << "Enter the number of elements you want : ";
	cin >> n;

	int a[n]; // integer array "a" of size n

	for ( int i = 0; i < n; i++) {
		// Taking the input from the user
		cout << "Value at [" << i << "] = ";
		cin >> a[i];
	}

	cout << "\n--------------------------\n\n";
    
	for ( int i = 0; i < n; i++) {
		// Displaying the elements of the array
		if (a[i] > a[0]) {
			a[0] = a[i];
		}
	}

	cout << "Largest element is : " << a[0] << endl; // Displaying the largest element of the array
	
	_getch();
	return 0;
}