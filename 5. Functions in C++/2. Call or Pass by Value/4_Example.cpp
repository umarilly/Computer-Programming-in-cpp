
/*
	Program in C++ to demonstrate the use of call by value in finding the sum of two numbers.
*/

#include<iostream>
#include<conio.h>

using namespace std;

// Function to calculate the sum of two numbers and return the result
int sum(int num_1, int num_2) {
	int num_3 = num_1 + num_2;
	return num_3;
}

int main() {
    
	int var_x, var_y, var_z; // Declare three integer variables

	var_x = 3; var_y = 5; // Initialize the variables
	var_z = sum(var_x, var_y); // Call the function sum and store the result in var_z
	cout << var_z << endl; // Print the result

	_getch();
	return 0;
}