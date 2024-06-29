
// Swapping of two integer variables using third variable - using call by pointer

#include<iostream>
#include<conio.h>
using namespace std;

void swapping(int* x, int *y) {
	int* temp;
	*temp = *x;
	*x = *y;
	*y = *temp;
}
int main() {
	
    int a = 10, b = 10;  

	cout << "Before Swapping :- " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swapping(&a, &b);

	cout << "After Swapping :- " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	_getch();
	return 0;
}