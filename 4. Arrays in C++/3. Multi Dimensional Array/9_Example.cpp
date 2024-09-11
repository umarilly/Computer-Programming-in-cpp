
/*
	Program in C++ to declare a 2D array of size 3x4 and display the elements of the matrix.
*/
#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main() {

	// Declaring a 2D array of size 3x4
	string xyz[3][4] = { {"Bird","Animal","Fish","Monstar"},{"iphone","Ultra","Max","Pro"},{"Samsung","Galaxy","Hot","Note"} };
	int i, j; // i is for row and j is for column
	cout << "The Martix is : \n"; // Displaying the elements of the matrix
    
	// Loop to display the elements of the matrix
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 3; j++) {
			cout << xyz[i][j] << "\t"<<" ";
		}
		cout << endl;
	}

	_getch();
	return 0;
}