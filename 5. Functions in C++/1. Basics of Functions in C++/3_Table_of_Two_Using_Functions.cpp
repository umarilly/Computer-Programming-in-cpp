
#include<iostream>
#include<conio.h>

using namespace std;

int table(int a, int b, int c) {

	for (a = 2; b <= 10; b++) {
		c = a * b;
		cout << a << "*" << b << "=" << c << endl;
	}

	return c;
}

int main() {

	int i=2, j=1, k=0;

	cout << "Table of Two :- " << endl;
	table(i, j, k);

	_getch();
	return 0;
}
