
#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int findGreatestNumber (int x , int y ) {
	if (x > y)
		return x;
	else
		return y;
}

int main() {

	int firstNumber, secondNumber;
	cout << "------------- Greatest of Two Numbers Program ------------- \n";
	cout << "Enter first number : ";
	cin >> firstNumber;
	cout << "Enter second number : ";
	cin >> secondNumber;

	int greatestNumber = findGreatestNumber(firstNumber, secondNumber);

	cout << "The greatest of two numbers is : " << greatestNumber << endl;

	_getch();
	return 0;
}
