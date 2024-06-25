
// Example to expalin reference and dereference operator

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int x = 5;
	int* xPtr;
	xPtr = &x;

	cout << x << endl; // The Value of x i.e., "5" 
	cout << xPtr << endl; // Memory Address of x
	cout << *xPtr << endl; // The Value of x (which is 5) using pointer dereference

	_getch();
	return 0;

}