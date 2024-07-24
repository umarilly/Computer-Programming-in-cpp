
#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	char abc[] = "Hello World";
	char* p;
	p = abc;

	int size = sizeof(abc) / sizeof(char);

	cout << abc << endl;

	for (int i=0 ; i<size;i++)
	cout << *(p++) ;

	_getch();
	return 0;
}