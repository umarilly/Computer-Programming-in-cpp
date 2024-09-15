
/*
	Program in C++ to demonstrate the use of call by value in swapping two numbers.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int swap (int x, int  y) {
	// Swapping the values of x and y
	int z = x;
	x = y;
	y = z;

    return x,y;
}

int main() {
    
	int a = 10, b = 15; // a and b are local to main function
	
	cout << "Before Swapping :- \n";
	cout << "a  = " << a << endl;
	cout << "b  = " << b << endl;

	swap(a, b); // a and b are passed by value

	cout << "After Swapping :- \n";
	cout << "a  = " << a << endl;
	cout << "b  = " << b << endl;
	
	_getch();
	return 0;
}