#include<iostream>
#include<conio.h>

using namespace std;

int swap (int x, int  y) {
	
    int z;

	z = x;
	x = y;
	y = z;

    return x,y;

}

int main() {
    
	int a = 10, b = 15;
	
	cout << "Before Swapping :- \n";
	cout << "a  = " << a << endl;
	cout << "b  = " << b << endl;

	swap(a, b);

	cout << "After Swapping :- \n";
	cout << "a  = " << a << endl;
	cout << "b  = " << b << endl;
	
	_getch();
	return 0;
}
