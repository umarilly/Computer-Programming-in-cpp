
// Example to show the concept of reference and dereference operator in pointers

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int a = 10; 
	int* b; 
	b = &a; 

	cout << "----- Showing that * and & are inverses of each other -----\n\n";
	cout << "The address of a is : " << &a << endl; // Prints the memory address of the variable "a"
    cout << "The value of b is : " << b << endl; // Prints the memory address stored in pointer "b", which is the address of "a"
	cout << "The value of a is : " << a  << endl; // Prints the value of "a", which is 10
    cout << "The value of *b is : " << *b << endl; // Prints the value pointed to by "b", which is the value of "a" (10)
    cout << endl;
	cout << "&*b : " << &*b << endl; // Prints the address of the value pointed to by "b", which is the address of "a"
    cout << "*&b : " << *&b << endl; // Prints the value stored in "b", which is the address of "a"

	_getch();
	return 0;
}