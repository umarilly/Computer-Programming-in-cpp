
#include<iostream>
#include<conio.h>

using namespace std;

int sum(int x, int  y) {
	
    x = x + 5;
	y = y + 5;
	cout << "\na and b in function are \n" << x << " & " << y << endl;
	return x + y;

}
int main() {
    
	int a = 10, b = 15;
	int c = sum(a, b);
	
	cout << "\nSum is : " << c << endl;

	cout << "\na and b in main are \n" << a << " & " << b << endl;

	_getch();
	return 0;
}
