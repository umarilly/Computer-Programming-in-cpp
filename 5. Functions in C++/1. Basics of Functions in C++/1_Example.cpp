
/*
	Program in C++ to find the sum of two numbers using function.
*/

#include<iostream>
#include<conio.h>

using namespace std;

// Function Prototype
int sum(int a, int b); 

int main() {

	int num1, num2;
	cout << "Enter the first numbers : ";
	cin >> num1;
    cout << "Enter the second numbers : ";
	cin >> num2;

	// Function Call or Function Invocation or Function Execution
	cout << "The sum of two numbers are : " << sum(num1, num2) << endl;

	_getch();
	return 0;
}

//Function Defination
int sum(int a, int b) {
    return (a + b);
}
