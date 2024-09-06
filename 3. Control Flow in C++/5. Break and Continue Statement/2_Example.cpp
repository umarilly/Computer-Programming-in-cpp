
/*
	Program in C++ to demonstrate the use of continue statement.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int number; // Declaring a variable of integer type

	// Infinite loop, will terminate when user enters a negative number
	while (true) {
		cout << "Please enter a number : "; // Prompting user to enter a number
		cin >> number; // Taking input from user
		if (number < 0) {
			break;
		} else {     
			continue;
		}
	}

	cout << "Negative number so here we are" << endl; // Printing message, when user enters a negative number

	_getch();
	return 0;
}