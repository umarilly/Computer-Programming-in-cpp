
/*
	Program in C++ to print the table of 2 using function.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int table(int a, int b, int c) {
	// for loop to print the table of 2
	for (a = 2; b <= 10; b++) {
		c = a * b;
		cout << a << "*" << b << "=" << c << endl;
	}

	return c;
}

int main() {

	// Declaration of variables
	int i=2, j=1, k=0; 

	cout << "Table of Two :- " << endl;
	// Function call and passing the values
	table(i, j, k);

	_getch();
	return 0;
}