
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int x, n;
	int a[20] = { 34, 56, 54, 45, 32, 98, 70, 81, 93, 14, 41, 52, 63, 74, 35, 26, 57, 68, 99, 27 };
	cout << "Enter the number to search its position in this array : ";
	cin >> n;

	for (int index_no = 0; index_no < 20; index_no++)
	{
		if (n == a[index_no])
		{
			x = index_no;
		}
	}
	cout << "\n";
	cout << "The index number or position of the entered number is : " << x << endl;
	_getch();
	return 0;
}