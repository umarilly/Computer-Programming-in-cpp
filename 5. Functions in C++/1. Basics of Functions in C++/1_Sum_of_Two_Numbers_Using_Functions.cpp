
#include<iostream>
#include<conio.h>

using namespace std;

int sum(int a, int b); // Function Prototype

int main() {
	int num1, num2;
	cout << "Enter the first numbers : ";
	cin >> num1;
    cout << "Enter the second numbers : ";
	cin >> num2;

	cout << "The sum of two numbers are : " << sum(num1, num2) << endl;

	_getch();
	return 0;
}

/* Function Defination */
int sum(int a, int b) {
    return (a + b);
}
