
#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
    int a = 10;
	int *p = &a;

	cout << a << " " << &a << endl;
	cout << p << " " << &p << endl;

	_getch();
	return 0;
}