
/*
	Program in C++ to search an the index of element in an array using Linear Search.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int x, num; // x is for index number and num is for number to search
	const int size = 10; // Declaring the size of the array
	int abc[size]; // Declaring an array of size 10

	// Taking input from user to search the number
	cout << "Enter the Elements of the Array :- \n\n";
	for (int i = 0; i < size; i++) {
		cout << "The Element at index [" << i << "] is : ";
		cin >> abc[i];
	}

	// Displaying the elements of the array
	cout << "\nThe Elements you entered in the Array are :- \n";
	for (int i = 0; i < size; i++) {
		cout << abc[i] << "  ";
	}

	// Taking input from user to search the index of the number
	cout << "\n\nEntered the number you want to find in Array :- \n";
	cin >> num;

	for (int index_no = 0; index_no < size; index_no++) {
		if (num == abc[index_no]) {
			x = index_no;
		}
	}

	// Displaying the index number of the entered number
	cout << "\n\nThe Entered Number is found on index number : " << x << endl;

	_getch();
	return 0;
}