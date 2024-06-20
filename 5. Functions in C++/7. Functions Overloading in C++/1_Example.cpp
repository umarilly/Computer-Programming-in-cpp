
#include<iostream>
#include<conio.h>
using namespace std;

int square(int x) {
	cout << "Called square with integer argument of : " << x << endl;
	return x * x;
}

double square(double y) {
	cout << "Called square with double argument of : " << y << endl;
	return y * y;
}

int main() {
	int a;
	double b;

	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;

	cout << endl;

	int int_result = square(a); 
	double double_result = square(b); 

	cout << endl;
	cout << "The square of integer " << a << " is : " << int_result << endl;
	cout << "The square of double " << b << " is : " << double_result << endl;
	
	_getch();
    return 0;
}