
// Concept of Assignment in Pointers

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
	int a = 100, b = 88, c = 8;

	int* p1 = &a, *p2 = &b, *p3 = &c;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << "\n\n";
	
	cout << "&a = " << &a << endl;
	cout << "&b = " << &b << endl;
	cout << "&c = " << &c << "\n\n";

	cout << "*p1 = " << *p1 << endl;
	cout << "*p2 = " << *p2 << endl;
	cout << "*p3 = " << *p3 << "\n\n";

	cout << "p1 = " << p1 << endl;
	cout << "p2 = " << p2 << endl;
	cout << "p3 = " << p3 << "\n\n";

	p2 = p1;
	b = *p3; 
	*p2 = *p3;
	
	cout << "p2 = " << p2 << endl;
	cout << "p1 = " << p1 << endl;
	cout << "*p3 = " << *p3 << endl;
	cout << "b = " << b << endl;
	cout << "*p3 = " << *p3 << endl;
	cout << "*p2 = " << *p2 << "\n\n";

	cout << a << " " << b << " " << c;
	
	_getch();
	return 0;
}