
#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int numbers[5] = { 10,20,30,40,50 };
	int* p;           
	p = numbers;     
	
	cout << *p << "\n";

	p++; 
	cout << *p << "\n";

	p++;
	cout << *p << "\n";

	p++;
	cout << *p << "\n";

	p++;
	cout << *p << "\n";


	for (int n = 0; n < 5; n++) {
		cout << numbers[n] << " ";
    }
	
	_getch();
	return 0;
}