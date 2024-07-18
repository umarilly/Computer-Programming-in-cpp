
#include<iostream>
#include<conio.h>

using namespace std;

void centimeters(double* ptrd) {
	*ptrd = *ptrd * 2.54;       
}

int main() {
	double var = 10.0;
	cout << "var = " << var << " inches" << endl;
	centimeters(&var); 
	cout << "var = " << var << " centimeters" << endl;

	_getch();
	return 0;
}