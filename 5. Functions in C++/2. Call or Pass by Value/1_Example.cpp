
/*
	Program in C++ to demonstrate the use of call by value.
*/


#include<iostream>
#include<conio.h>

using namespace std;

int sumFunction(int x, int  y) {
	
    x = x + 5;
	y = y + 5;

	cout << "\na and b in function are \n" << x << " & " << y << endl;
	return x + y;

}
int main() {
    
	// a and b are local to main function
	int a = 15, b = 20; 

	cout << "\na and b in main are \n" << a << " & " << b << endl;

	// a and b are passed by value
	int c = sumFunction(a, b);

	cout << "\n&, The sum is : " << c << endl; // This line will print display the output

	_getch();
	return 0;
}
