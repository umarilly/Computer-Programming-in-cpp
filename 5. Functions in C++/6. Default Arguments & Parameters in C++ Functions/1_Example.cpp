
// Program to understand the behavior of default parameters - Just the sum of 2 numbers

#include<iostream>
#include<conio.h>
using namespace std;

void sum (int x = 15, int y = 16) {
	x + y;
	cout << "Sum is : " << x + y << endl;
}

int main() {

	int a = 10, b = 5;

	sum(a, b);

	_getch();
	return 0;
}