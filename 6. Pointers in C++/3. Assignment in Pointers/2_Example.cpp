
// Example to explain the working of pointers in C++

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
	int v1 = 10;  // Initializing an integer variable v1 with the value 10
	int *p1 = &v1;  // Declaring a pointer p1 and initializing it with the address of v1
	
	*p1 = 42;  // Dereferencing p1 to update the value of v1 to 42

	cout << v1 << endl;  // Printing the value of v1, which should now be 42
	cout << *p1 << endl;  // Printing the value pointed to by p1, which should also be 42

    int *p2;  // Declaring another pointer p2
	p2 = p1;  // Assigning p2 to point to the same address as p1

	cout << *p2 << endl;  // Printing the value pointed to by p2, which should be 42

	_getch();  
	return 0; 
}