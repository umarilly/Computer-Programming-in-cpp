
/*
	Program in C++ to print the table of any number
*/

#include<iostream>
#include<conio.h>

using namespace std;

// Function with three parameters to print the table of a number
int table(int a, int b, int c) {
    for (a; b <= 10; b++) {
		c = a * b; // Multiplication of two numbers
		cout << a << "*" << b << "=" << c << endl;
	}
	return c;
}

int main() {
	int i, j=1, k=0;
	cout << "Enter the number whose table you want : ";
	cin >> i;
	// Function call to print the table of a number
	table(i, j, k);

	_getch();
	return 0;
}