
// The program demonstrates how pointers can be used to modify the value of a variable and how one pointer can be assigned to another, making them both point to the same address.

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
	int v1 = 0;  // Initializing integer variable v1 with value 0
	int* p1 = &v1;  // Initializing pointer p1 with the address of v1
	*p1 = 42;  // Dereferencing p1 to set the value of v1 to 42

    int* p2;    // Declaring an integer pointer p2

	cout << v1 << endl;  // Printing the value of v1, expected output: 42
    cout << &v1 << endl; // Printing the memory address of v1
    cout << *p1 << endl; // Dereferencing pointer p1 to display the value of 42
    cout << p1 << endl;  // Printing the address stored in p1 (address of v1)

	p2 = p1;  // Assigning p1 to p2, so p2 also points to the address of v1
	cout << *p2;  // Dereferencing p2 to display the value at the address of v1, expected output: 42

	_getch();  
	return 0;  
}