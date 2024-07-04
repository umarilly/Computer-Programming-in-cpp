
// The program demonstrates how pointers can be used to modify the value of a variable and how one pointer can be assigned to another.

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
	int v1 = 0; 
	int* p1 = &v1;
	* p1 = 10;

	cout << v1 << endl;  // Printing the value of v1, expected output: 10
    cout << &v1 << endl; // Printing the memory address of v1
    cout << *p1 << endl; // Dereferencing pointer p1 to display the value of 10
    cout << p1 << endl;  // Printing the address stored in p1 (address of v1)

	int* p2;
	p2 = &v1;
	*p2 = *p1;

	cout << *p2 << endl; // This will also print 10, as it also holds same address as p1

	_getch();
	return 0;
}