
#include<iostream>
#include<conio.h>

using namespace std;

void foo (int  value) {
	value = 9;
}

int main() {

	int value = 3;
	foo(value);
	cout << "The value is : " << value << endl;

	_getch();
	return 0;
}
