
#include<iostream>
#include<conio.h>

using namespace std;

int xyz( int input) {
    cout << "Enter the input please ( Taking input inside function ) : ";
	cin >> input;
	return input;
}

int main() {

	int output = 0;
	cout << "Displying the output ( In the main() body ) : " << xyz(output);

	_getch();
	return 0;
}
