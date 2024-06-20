
// Example to expalin the working of Function Overloading

#include<iostream>
#include<conio.h>
using namespace std;

int add(int x, int y) {
	cout << "==> Function 1 :- \n";
	return (x + y);
}

double add(double x, double y) {
	cout << "==> Function 2 :- \n";
	return (x + y);
}

double add(int x, double y) {
	cout << "==> Function 3 :- \n";
	return (x + y);
}

double add(double x, int y) {
	cout << "==> Function 4 :- \n";
	return (x + y);
}

int add(int x, int y, int z) {
	cout << "==> Function 5 :- \n";
	return x + y + z;
}

int main() {
	cout << add(4, 5) << endl;
	cout << add(6.6, 7.7) << endl;
	cout << add(6, 7.7) << endl;
	cout << add(6.5, 7) << endl;
	cout << add(6, 7, 9) << endl;

	_getch();
	return 0;
}