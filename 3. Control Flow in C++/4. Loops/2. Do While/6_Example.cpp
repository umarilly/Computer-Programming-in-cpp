
/*
    Program in C++ to demonstrate the use of the do-while loop.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int dividend, divisor, quotient, remainder; // Declare dividend, divisor, quotient, and remainder.
	char character; // Declare a character variable.

	do {
		cout << "Enter dividend : ";
		cin >> dividend;
		cout << "Enter Divisor : ";
		cin >> divisor;

		quotient = dividend / divisor; // Calculate the quotient.
		remainder = dividend % divisor; // Calculate the remainder.

		cout << "Quotient is : " << quotient << endl;
		cout << "Remainder is : " << remainder << endl;
		cout << " Do another Division Calculation? (Y/N) : ";
		cin >> character;
	} while (character != 'n' && character != 'N'); // Repeat the above block until the value of character is not equal to 'n' or 'N'.

	_getch();
	return 0;
}