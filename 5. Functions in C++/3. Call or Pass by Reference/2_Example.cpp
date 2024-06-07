#include<iostream>
#include<conio.h>

using namespace std;

void swap (int & x, int & y) {

	int z;
	z = x;
	x = y;
	y = z;
}

int main() {

	int a = 10, b = 15;
	
    // Just for the better understanding of swapping
	cout << "Before Swapping :- \n";
	cout << "a  : " << a << endl;
	cout << "b  : " << b << endl;

	swap(a, b);

	cout << "After Swapping :- \n";
	cout << "a  : " << a << endl;
	cout << "b  : " << b << endl;
	
	_getch();
	return 0;
}
