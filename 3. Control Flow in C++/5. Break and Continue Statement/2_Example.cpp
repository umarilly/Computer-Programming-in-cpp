
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int next;

	while (true)
	{
		cout << "Enter a number : ";
		cin >> next;
		if (next < 0) 
		{
			break;
		}
		else
		{     
			continue;
		}
	
	}
	cout << "Negative number so here we are" << endl;

	_getch();
	return 0;
}
