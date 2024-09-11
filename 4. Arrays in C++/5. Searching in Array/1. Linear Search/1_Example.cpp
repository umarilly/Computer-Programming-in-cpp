
/*
	Program in C++ to search the index of element in an array using linear search.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int x, n; // x is for index number and n is for number to search
	// Declaring an array of size 20
	int a[20] = { 34, 56, 54, 45, 32, 98, 70, 81, 93, 14, 41, 52, 63, 74, 35, 26, 57, 68, 99, 27 };
	
	// Taking input from user to search the number
	cout << "Enter the number to search its position in this array : ";
	cin >> n;

	// Searching the index of the number in the array
	for (int index_no = 0; index_no < 20; index_no++) {
		if (n == a[index_no]) {
			x = index_no;
		}
	}

	cout << "\nThe index number or position of the entered number is : " << x << endl;

	_getch();
	return 0;
}