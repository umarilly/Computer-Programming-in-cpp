#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x, num;
	const int size = 10;
	int abc[size];

	cout << "Enter the Elements of the Array :- \n\n";
	for (int i = 0; i < size; i++)
	{
		cout << "The Element at index [" << i << "] is : ";
		cin >> abc[i];
	}
	cout << "\n";
	cout << "The Elements you entered in the Array are :- \n";
	for (int i = 0; i < size; i++)
	{
		cout << abc[i] << "  ";
	}
	cout << "\n\n";
	cout << "Entered the number you want to find in Array :- \n";
	cin >> num;

	for (int index_no = 0; index_no < size; index_no++)
	{
		if (num == abc[index_no])
		{
			x = index_no;
		}
	}
	cout << "\n";
	cout << "\nThe Entered Number is found on index number : " << x << endl;
	_getch();
	return 0;
}