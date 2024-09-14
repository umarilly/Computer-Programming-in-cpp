
/*
  Program in C++ to check whether the number is even or odd in an array.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

  const int size = 15; // Size of array
	int arr[size]; // Array declaration
	
	for (int i = 0; i < size; i++) {
    // Taking input from user
		cout << "Enter value at index number : " << i << " : ";
		cin >> arr[i];
	}

	cout << "\n"; 

	for (int i = 0; i < size; i++) {
    // Checking whether the number is even or odd
		if (arr[i] % 2 == 0 ) {
			cout   << arr[i] << " is Even " << "\n"; // Printing the number is even
		}
		else {
			cout  << arr[i] << " is odd " << "\n"; // Printing the number is odd
		}
	}

	_getch();
	return 0;
}