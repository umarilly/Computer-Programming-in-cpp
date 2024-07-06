
#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int numbers[5] = {10,20,30,40,50};
	int* p;
	p = numbers;

	for (int n = 0; n < 5; n++)
		cout << numbers[n] << " ";

	cout << endl;

	for (int n = 0; n < 5; n++)
		cout << p[n] << " ";

	cout << endl;
	
	cout << numbers[0];
	cout << endl;

	cout << *p;
	cout << endl;

	cout << numbers;
	cout << endl;

	cout << p;
	cout << endl;

	_getch();
	return 0;
}