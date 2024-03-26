
// A program to input data into array of five elements, calculate the sum and average of the elements and then print the sum and average on the screen.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[5]; // integer array "a" of size 5

	int sum = 0;
    double avg;

	for (int i = 0; i <= 5; i++) {

		cout << "Value at [" << i << "] = ";
		cin >> a[i];
		sum = sum + a[i];

	}

	cout << "The total sum is : " << sum << endl;
    avg = static_cast<double>(sum) / 6;
	cout << "The average is : " << avg << endl;
	_getch();
	return 0;

}
