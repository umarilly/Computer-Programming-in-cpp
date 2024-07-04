
#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
	int v1 = 0; 
	int* p1 = &v1;
	* p1 = 42;

	cout << v1 << endl;
	cout << *p1 << endl;

	int* p2;
	p2 = &v1;
	*p2 = *p1;
	cout << *p2 << endl;

	_getch();
	return 0;
}