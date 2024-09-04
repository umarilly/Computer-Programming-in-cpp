
/*
    Program in C++ to demonstrate the use of goto statement.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	cout << "Hi there!\n"; 

	goto Label; // This is the goto statement, it will jump to the label Label

	cout << "How are you feeling?" << endl; // This line will not be executed
    Label:
	cout << "Hope you are good!"; // This is the label

	_getch();
	return 0;
}