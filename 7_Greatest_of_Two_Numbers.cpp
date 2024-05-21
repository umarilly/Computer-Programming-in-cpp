
#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int max_m (int x , int y ) {
	if (x > y)
		return x;
	else
		return y;
}

int main() {

	int a, b;
	cout << "------------- Greatest of Two Numbers Program ------------- \n";
	cout << "Enter first number : ";
	cin >> a;
	cout << "Enter second number : ";
	cin >> b;

	int c = max_m(a, b);

	cout << "The greatest of two numbers is : " << c << endl;

	_getch();
	return 0;
}
