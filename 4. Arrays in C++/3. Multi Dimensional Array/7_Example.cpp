
/*
	Program in C++ to sum the rows of a 2D array.
*/

#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	int abc[3][3];
	int i, j;
	int sum = 0;

	cout << "Enter values of First 2-D array : \n";  
	
	// Taking input from user for first 2-D array
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cin >> abc[i][j];
		}
	}
	
	cout << endl;
	
	// Displaying the values of 2-D array
	for (i = 0; i < 3; i++) {
		cout << endl;
		for (j = 0; j < 3; j++) {
			cout << abc[i][j] << " ";
			sum = sum + abc[i][j];
		}
	}

    cout << "\nThe sum of rows is : " << sum << endl;
	
	_getch();
	return 0;
}

/*
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int abc[3][3];
	int i, j;
	int sum = 0;
	cout << "Enter values of First 2-D array : \n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> abc[i][j];
		}
	}

	cout << endl;

	for (i = 0; i < 3; i++)
	{
		cout << endl;
		for (j = 0; j < 3; j++)
		{
			cout << abc[i][j] << " ";
			sum = sum + abc[i][j];
		}
		cout << "\nThe sum of rows is : " << sum << endl;
		sum = 0;
	}

	_getch();
	return 0;
}
*/
