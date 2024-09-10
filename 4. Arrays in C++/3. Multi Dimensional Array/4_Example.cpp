
/*
	Program in C++ to declear a 2D array and take input from user and display the value of 2-D array.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int abc[2][2]; // 2-D array declearation
	int i, j; // loop variable

	cout << "Enter value of 2-D array : \n" ;

	for ( i = 0; i < 2; i++) {
		// loop for column
		for (j = 0; j <2;j++) {
			// loop for row
			cin>> abc[i][j];
		}
	}
	cout << "The value of 2-D array are : \n" ;

	// Nested for loop for printing of values of 2D array
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << abc[i][j]<<"  ";
		}
		cout << "\n";
	}

    _getch();
	return 0;
}