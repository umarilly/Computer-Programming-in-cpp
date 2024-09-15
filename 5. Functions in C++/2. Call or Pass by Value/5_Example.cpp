
/*
	Program  in C++ to demonstrate the use of call by value in finding the sum and average of two numbers.
*/

#include<iostream>
#include<conio.h>

using namespace std;

// Function to calculate the sum and average of two numbers
void sum_avg (double i , double j ,double sum ,double avg) {
	sum = i + j;
	avg = sum / 2;
}

int main() {
    
	int a, b;
	int sum = 0, avg = 0;

	cout << "Enter two numbers :- \n";
	cin >> a >> b;

	sum_avg(a, b, sum, avg); // a and b are passed by value

	cout << "The sum is : " << sum << endl;
	cout << "The avg is : " << avg << endl;

	_getch();
	return 0;
}