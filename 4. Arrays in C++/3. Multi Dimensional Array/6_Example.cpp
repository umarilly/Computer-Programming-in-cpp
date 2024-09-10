
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int abc[3][3],xyz[3][3],sub[3][3];
	int i, j;
	cout << "Enter values of First 2-D array : \n";   
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> abc[i][j];
		}
	}
	cout << endl;
	cout << "Enter values of Second 2-D array : \n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> xyz[i][j];
		}
	}
	cout << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sub[i][j] = abc[i][j] - xyz[i][j];
		}
	}
	cout << "Subtraction of First and Second 2-D array is : \n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << sub[i][j] << setw(5);
		}
		cout << "\n";
	}
	_getch();
	return 0;
}
