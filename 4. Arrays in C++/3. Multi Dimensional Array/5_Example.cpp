
/*
	Program in C++ to declare two 2D arrays of size 3x3 and take input from user and display the addition of two 2D arrays.
*/

#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main() {

	int abc[3][3],xyz[3][3],add[3][3];
	int i, j;

	cout << "Enter values of First 2-D array : \n";  
	
	// Taking input from user for first 2-D array
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cin >> abc[i][j];
		}
	}

	cout << "\nEnter values of Second 2-D array : \n";

	// Taking input from user for second 2-D array
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cin >> xyz[i][j];
		}
	}

	cout << endl;

	// Addition of two 2-D array
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			add[i][j] = abc[i][j] + xyz[i][j];
		}
	}

	cout << "Addition of First and Second 2-D array is : \n";
	
	// Displaying the addition of two 2-D array
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cout << add[i][j] << setw(5);
		}
		cout << "\n";
	}

	_getch();
	return 0;
}