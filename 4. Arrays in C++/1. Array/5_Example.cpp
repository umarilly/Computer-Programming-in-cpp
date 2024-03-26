
// Copy 1 array into another

#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int a[5],b[5];

	for (int i = 0; i <= 4; i++) {
		cout << "Value at [" << i << "] = ";
		cin >> a[i];
	}

	cout << "\n--------------------------\n\n";

	for (int i = 0; i <= 4; i++) {
		b[i]= a[i];
		cout << "Value at [" << i << "] = " << b[i] << endl;
		
	}
	
	_getch();
	return 0;

}
