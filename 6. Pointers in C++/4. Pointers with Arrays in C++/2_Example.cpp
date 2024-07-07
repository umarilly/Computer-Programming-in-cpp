#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int numbers[5] = { 10,20,30,40,50 };
	int* p;
	p = numbers;

	for (int n = 0; n < 5; n++) {
		cout << numbers[n] << " ";
    }

	cout << endl;

	for (int n = 0; n < 5; n++) {
		cout << p[n] << " ";
    }

	cout << endl;
	
	cout << numbers[0] << " " << numbers[1] << " " << numbers[2] << " " << numbers[3] << " " << numbers[4] << " ";
	cout << endl;

	cout << *p << " " << *(p + 1) << " " << *(p + 2) << " " << *(p + 3) << " " << *(p + 4) << " ";
	cout << endl;

	cout << numbers << " " << numbers + 1 << " " << numbers + 2 << " " << numbers + 3 << " " << numbers + 4 << " ";
	cout << endl;

	cout << p << " " << p + 1 << " " << p + 2 << " " << p + 3 << " " << p + 4 << " ";
	cout << endl;

	_getch();
	return 0;
}
