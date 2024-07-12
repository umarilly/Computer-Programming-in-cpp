
#include<iostream>
#include<conio.h>
using namespace std;

int main() {

	int numbers[5];   
	int* p;           
	p = numbers;     
	
	*p = 10;      
	cout << *p;
	cout << endl;

	p=&numbers[1]; 
	*p = 20;
	cout << *p;
	cout << endl;

	p = &numbers[2];
	*p = 30;
	cout << *p;
	cout << endl;

	p = &numbers[3];
	*p = 40;
	cout << *p;
	cout << endl;

	p = &numbers[4];
	*p = 50;
	cout << *p;
	cout << endl;


	for (int n = 0; n < 5; n++)
		cout << numbers[n] << " ";
	
	_getch();
	return 0;
}