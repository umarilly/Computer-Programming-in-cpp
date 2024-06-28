
#include<iostream>
#include<conio.h>

using namespace std;

void callbypointer(int* number_1) {
	*number_1 = *number_1 * *number_1 * *number_1;
}

int main() {

	int number = 5;
	cout << "The original value is : " << number << endl;
	callbypointer(&number);
	cout << "The new value is : " << number << endl;

	_getch();
	return 0;
}