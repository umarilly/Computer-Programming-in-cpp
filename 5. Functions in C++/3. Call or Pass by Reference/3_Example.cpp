
/*
	Program in C++ to find the sum and average of two numbers using call by reference.
*/

#include<iostream>
#include<conio.h>

using namespace std;

// Function to calculate sum and average of two numbers
void sum_avg (int &i , int &j , int &sum , int &avg) {
	sum = i + j;
	avg = sum / 2;
}

int main() {

	int a, b;
	int sum = 0, avg = 0;

	cout << "Enter two numbers :- \n";
	cin >> a >> b;

	sum_avg( a, b, sum, avg); // Calling function by reference

	cout << "The sum is : " << sum << endl;
	cout << "The avg is : " << avg << endl;

	_getch();
	return 0;
}