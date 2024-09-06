
/*
	Program in C++ to demonstrate the use of break statement.
*/

#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main() {

	string ans; // We will discuss about strings later on 

	do {
		cout << "Would you help me ? ";
		cin >> ans;
	if (ans == "Y" || ans == "y") {
		cout << "Thank you for your help!" << endl;
		break; // If user presses y, then remaining statements will terminate 
	}

		cout << "Really ? ";
		cin >> ans;
	} while (ans != "Y" && ans != "y"); // If user presses y, then loop will terminate
	
	cout << "Great!";

	_getch();
	return 0;
}