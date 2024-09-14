
#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int square(int y) {
	return y * y;
}

int main() {
	for (int x = 1; x <= 10; x++) {
		cout << "Square of " << x << " is : ";
		cout << setw(3) << square(x) ; 
		cout << endl;
	}
	_getch();
	return 0;
}
