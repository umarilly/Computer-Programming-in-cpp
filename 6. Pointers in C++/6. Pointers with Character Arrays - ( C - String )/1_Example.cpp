
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	char abc[] = "Hello World";
	char* p;
	p = abc;

	cout << abc << endl;

	cout << p + 4 << endl;

	int size = sizeof(abc) / sizeof(char);
	for (int i = 0; i < size; i++)
		cout << *p++;
		cout << endl;

	cout << &abc[4] <<endl;
	
	cout << p + 4 << endl;


	_getch();
	return 0;
}
