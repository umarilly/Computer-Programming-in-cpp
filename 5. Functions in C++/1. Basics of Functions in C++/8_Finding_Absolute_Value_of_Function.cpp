
#include<iostream>
#include<conio.h>

using namespace std;

int absolute(int x) {
	if (x >= 0)
		return x;
	else
		return -x;
}

int main() {

	int value, answer;
	cout << "Enter any number ( -ve or +ve integer ) : ";
	cin >> value;
	while (value != 0)  {
		answer = absolute(value);
		cout << "The absolute value of " << value << " is : " << answer << endl;
		cin >> value;
	}
	_getch();
	return 0;
} 
