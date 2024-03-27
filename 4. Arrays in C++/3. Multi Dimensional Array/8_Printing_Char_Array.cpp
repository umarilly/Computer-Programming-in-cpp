
#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	char xyz[3][4] = { {'f','s','t','m'},{'g','r','u','s'},{'m','q','a','w'} };
	int i, j;
	cout << "The Martix is : \n";
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			cout << xyz[i][j] << "\t"<<" ";
		}
		cout << endl;
	}
	_getch();
	return 0;
}
