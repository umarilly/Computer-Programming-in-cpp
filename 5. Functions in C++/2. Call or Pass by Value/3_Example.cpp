
/*
	Program in C++ to demonstrate the use of call by value in finding the sum and average of two numbers.
*/

#include<iostream>
#include<conio.h>

using namespace std;

// Function to calculate & print the sum and average of two numbers
void PrintSumAve(double no1, double no2) {

	double sum, average;
	sum = no1 + no2;
	average = sum / 2;
	cout << "The sum is : " << sum << endl;
	cout << "The average is : " << average << endl;
}

int main() {
    
	double x, y;
	cout << "Enter two numbers :- \n";
	cin >> x >> y;
	
	// Passing the values of x and y to the function
	PrintSumAve(x, y);
	
	_getch();
	return 0;
}