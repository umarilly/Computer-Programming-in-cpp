
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
    
	int a = 15, b = 20;
	cout << "\na and b in main are \n" << a << " & " << b << endl;

	int c = sumFunction(a, b);
	cout << "\n&, The sum is : " << c << endl;

	_getch();
	return 0;
}
