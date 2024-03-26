
// How to find the largest number in the array

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a[10];

	int n;
	cout << "Enter the number of elements you want : ";
	cin >> n;

	for ( int i = 0; i < n; i++)
	{
		cout << "Value at [" << i << "] = ";
		cin >> a[i];
	}

	cout << "\n--------------------------\n\n";
    
	for ( int i = 0; i < n; i++)
	{
		if (a[i] > a[0])
		{
			a[0] = a[i];
		}
	}
	cout << "Largest element is : " << a[0] << endl;
	
	_getch();
	return 0;

}
