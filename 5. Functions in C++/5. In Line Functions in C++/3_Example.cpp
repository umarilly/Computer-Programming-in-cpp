
// Finding cube of number using inline function

#include<iostream>
#include<conio.h>

using namespace std;

inline int cube(int i) {
	return i * i * i;
}

int main() {
	int a, b;
	cout << "Enter number whose cube you want : ";
	cin >> a;
	int c = cube(a);
	cout << "cube of " << a <<  " is : " << c << endl;
	
	_getch();
	return 0;
}
