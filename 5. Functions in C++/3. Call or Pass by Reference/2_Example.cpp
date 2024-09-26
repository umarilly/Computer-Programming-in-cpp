
/*
	Program in C++ to swap two numbers using call by reference.
*/

#include<iostream>
#include<conio.h>

using namespace std;

// Function to swap two numbers
void swap (int & x, int & y) {
	int z;
	z = x;
	x = y;
	y = z;
}

int main() {

	int a = 10, b = 15;
	
    // Just for the better understanding of swapping
	cout << "Before Swapping :- \n";
	cout << "a  : " << a << endl;
	cout << "b  : " << b << endl;

	swap(a, b); // Calling function by reference

	cout << "After Swapping :- \n";
	cout << "a  : " << a << endl;
	cout << "b  : " << b << endl;
	
	_getch();
	return 0;
}