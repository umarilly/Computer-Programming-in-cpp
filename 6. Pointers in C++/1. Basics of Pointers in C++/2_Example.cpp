
#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int a = 10;
    int b = 10;

	cout << "Value stored in a is : " << a << endl;
	cout << "Value stored in b is : " << b << endl;
	cout << endl;
	cout << "The address of a is : " << &a << endl;
	cout << "The address of b is : " << &b << endl;

	_getch();
	return 0;
}