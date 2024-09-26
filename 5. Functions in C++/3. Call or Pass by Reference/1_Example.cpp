
/*
	Program in C++ to demonstrate call by reference.
*/

#include<iostream>
#include<conio.h>

using namespace std;

// Function to calculate sum of two numbers
int sum(int & x, int & y) {
    x = x + 5;
	y = y + 5;
	cout << "\na and b in function are \n" << x << " & " << y << endl;
	return x + y;
}

int main() {
    
	int a = 10, b = 15;
	int c = sum(a, b); // Calling function by reference
	
	cout << "\nSum is : " << c << endl; // This will print the sum
	// This will print the updated values of a and b
	cout << "\na and b in main are \n" << a << " & " << b << endl; 

	_getch();
	return 0;
}