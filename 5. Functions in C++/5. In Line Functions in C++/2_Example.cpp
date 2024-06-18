
// Finding square of number using inline function

#include<iostream>
#include<conio.h>
using namespace std;

inline int square (int i) {
	return i * i;
}

int main() {
    
	int a, b;
	cout << "Enter number whose square you want : ";
	cin >> a;
	int c = square(a);
	cout << "Square of " << a <<  " is : " << c << endl;
	
	_getch();
	return 0;
}
