
#include<iostream>
#include<conio.h>

using namespace std;

int square(int x) 
{
	cout << "==> Function 1 :- \n";
	return x * x; 
}
float square(float x) 
{
	cout << "==> Function 2 :- \n";
	return x * x;
}


int main()
{
	int a = 7;
	float b = 7.6;

	cout << square (a) << endl;
	cout << square(b) << endl;


	_getch();
	return 0;
}
