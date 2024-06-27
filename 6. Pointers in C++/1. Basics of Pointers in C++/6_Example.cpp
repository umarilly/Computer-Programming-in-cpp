
#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    
	int a; 
	int* b; 
	a = 7;
	b = &a; 
	
	cout << "The address of a is " << &a << "\nThe value of b is " << b;
	cout << "\n\nThe value of a is " << a  << "\nThe value of *b is " << *b;

	cout << "\n\n";
	cout << "Showing that * and & are inverses of each other" << endl;

	cout << "&*b = " << &*b << "\n *&b = " << *&b << endl;

	_getch();
	return 0;
}