
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int abc[2][2];
	int i, j;
	cout << "Enter value of 2-D array : \n" ;
	for ( i = 0; i < 2; i++)
	{
		for (j = 0; j <2;j++)
		{
			cin>> abc[i][j];
		}
	}
	cout << "The value of 2-D array are : \n" ;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << abc[i][j]<<"  ";
		}
		cout << "\n";
	}

    _getch();
	return 0;
}
