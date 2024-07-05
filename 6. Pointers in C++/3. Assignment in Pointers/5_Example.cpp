
#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    
	int v1 = 0; 
	int* p1 = &v1;
	* p1 = 42;

    int* p2;

	cout << &v1 << endl;
	cout << v1 << endl;
	cout << *p1 << endl;
    cout << p1 << endl;

	p2 = &v1;
	
	cout << &v1 << endl;
	cout << p2 << endl;
	
	*p2 = *p1;

	cout << *p2 << endl;

	_getch();
	return 0;
}
