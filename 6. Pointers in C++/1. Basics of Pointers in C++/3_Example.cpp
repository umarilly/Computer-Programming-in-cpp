
// Eaxmple to explain the working of poniters in C++
// This example explains about reference (Address of) & dereference (Value Pointed by) operator

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
    int a = 10;
	int *p = &a; // The pointer variable "p", stores the address of variable "a"

	cout << "The Value of a is : " << a << endl;
	cout << "The Memory Address of a is : " << &a << endl;
    cout << "The Value of p is : " << p << endl;
    cout << "The Memory Address of p is : " << &p << endl;

	_getch();
	return 0;
}