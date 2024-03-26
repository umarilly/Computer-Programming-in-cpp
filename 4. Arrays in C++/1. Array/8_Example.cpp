
// How to use const keyword

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	const int size = 20;
	int a[size];
    
	int i,j;

	for ( i = 0; i < 9; i++)
	{
		cout << "Value at [" << i << "] = ";
		cin >> a[i];
	}
	
	cout << "\n--------------------------\n\n";
	
	for (i = 0; i < 9; i++)
	{
		cout << "Value at [" << i << "] = " << a[i] << endl;
	}
	
	_getch();
	return 0;

}
