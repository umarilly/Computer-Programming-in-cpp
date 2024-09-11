
/*
	Program in C++ to search the number at particular index in an array using Binary Search.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	const int size = 10;
	int abc[size];
	int first = 0, mid, last = 9;
	int number;

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
	cin >> number;

	// Sorting the array
	while (first <= last) {
		// Calculating the middle element of the array
		mid = (first + last) / 2;
		if (number == abc[mid]) {
			// Displaying the index number of the entered number
			cout << "\nThe Number is found at index number : " << mid << endl;
			break;
		} else if (number > abc[mid]) {
			// If the number is greater than the middle element
            first = (mid + 1);
        } else if (number < abc[mid]) {
			// If the number is smaller than the middle element
            last = (mid - 1);
        }
	}

	// If the number is not found
	if (number < abc[mid] || number > abc[mid]) {
		cout << "\nNumber not found " << endl;
	}

	_getch();
	return 0;
}