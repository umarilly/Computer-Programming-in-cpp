
/*
    Program in C++ to demonstrate the use of if else statement.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	double num = 12.7; // Initialize the variable num with 12.7.

	if (num >= 12) {
		cout << "French" ; // This line will be printed only if the number is greater than or equal to 12.
    }   
	else {
		cout << "Fries" ; // This line will be printed only if the number is less than 12.
    }

	_getch();
	return 0;
}