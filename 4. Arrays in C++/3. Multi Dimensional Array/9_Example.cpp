
#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	string xyz[3][4] = { {"Bird","Animal","Fish","Monstar"},{"iphone","Ultra","Max","Pro"},{"Samsung","Galaxy","Hot","Note"} };

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
