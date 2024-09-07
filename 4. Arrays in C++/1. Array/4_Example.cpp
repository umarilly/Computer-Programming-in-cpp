
/*
	Program in C++ to input data into array of five elements and,
	Calculate the sum and average of the elements and then print the sum and average on the screen.
*/
#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int a[5]; // integer array "a" of size 5

	int sum = 0; // variable to store the sum of the elements
    double avg; // variable to store the average of the elements

	for (int i = 0; i <= 5; i++) {
		// Taking the input from the user
		cout << "Value at [" << i << "] = ";
		cin >> a[i];
		sum = sum + a[i]; // Calculating the sum of the elements
	}

	cout << "The total sum is : " << sum << endl; // Displaying the sum of the elements
    avg = static_cast<double>(sum) / 6; // Calculating the average of the elements
	cout << "The average is : " << avg << endl; // Displaying the average of the elements

	_getch();
	return 0;

}