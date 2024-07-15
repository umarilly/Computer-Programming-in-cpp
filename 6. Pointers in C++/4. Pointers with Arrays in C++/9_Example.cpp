
#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int a[5] = {10,20,30,40,50};
	int* p;
	p = a;

	for (int n = 0; n < 5; n++) {
		cout << *(p++) << " ";
	}
	cout << endl;

	for (int n = 0; n < 5; n++) {
		cout << *(p = &a[n]) << " ";
	}
	cout << endl;

	for (int n = 0; n < 5; n++) {
		cout << *(p = a + n) << " ";
	}
	cout << endl;

	_getch();
	return 0;
}