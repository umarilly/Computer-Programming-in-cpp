
// Example to understand function overloading - Square of numbers having different datatypes 
// The functios names are same - but they are accepting different types of parameters

#include<iostream>
#include<conio.h>

using namespace std;

int square(int x) {
	cout << "==> The Function 1 :- \n";
	return x * x; 
}

float square(float x)  {
	cout << "==> The Function 2 :- \n";
	return x * x;
}

int main() {

	int a = 10;
	float b = 10.10;

    cout << endl;

	cout << "The Square of " << a << " is : " << square (a) << endl;
	cout << "The Square of " << b << " is : " << square (b) << endl;

	_getch();
	return 0;
}
