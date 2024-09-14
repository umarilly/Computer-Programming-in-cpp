
#include<iostream>
#include<conio.h>

using namespace std;

int table(int a, int b, int c) {
	
    for (a; b <= 10; b++) {
		c = a * b;
		cout << a << "*" << b << "=" << c << endl;
	}

	return c;
}

int main() {

	int i, j=1, k=0;
	cout << "Enter the number whose table you want : ";
	cin >> i;
	table(i, j, k);

	_getch();
	return 0;
}
