
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	string ans; // We will discuss about strings later on 

	do {
		cout << "Would you help me ? ";
		cin >> ans;
	if (ans == "Y" || ans == "y") 
	    break; // If user presses y, then remaining statements will terminate 
		cout << "Really ? ";
		cin >> ans;
	} 

	while (ans != "Y" && ans != "y");
	    cout << "Great!";


	_getch();
	return 0;
}
