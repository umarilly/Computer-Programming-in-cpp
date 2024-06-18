
// Addition of two numbers using Inline function

#include<iostream>
#include<conio.h>

using namespace std;

inline int add (int i, int j) {
	return i + j;
}

int main() {
	int a, b;
	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;
	int c = add(a, b);
	cout << "Addition of " << a << " and " << b << " is : " << c << endl;
	
	_getch();
	return 0;
}