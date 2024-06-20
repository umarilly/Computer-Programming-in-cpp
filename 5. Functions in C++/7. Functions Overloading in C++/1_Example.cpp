
#include<iostream>
#include<conio.h>

using namespace std;

int square(int x) {
	return x * x;
}

double square(double y) {
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

	cout << "The square of integer " << a << " is : " << square(a) << endl;
	cout << "The square of double " << b << " is : " << square(b) << endl;
	
	_getch();
    return 0;
}