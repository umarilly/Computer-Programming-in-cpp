
#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int absolute(int x) {
	if (x >= 0)
		return x;
	else
		return -x;
}

int main() {

	int num, answer;
	cout << "Enter an integer (0 to stop) : ";
	cin >> num;
	while (num != 0)  {
		answer = absolute(num);
		cout << "The absolute value of " << num << " is: " << answer << endl;
		cin >> num;
	}
	_getch();
	return 0;
} 
