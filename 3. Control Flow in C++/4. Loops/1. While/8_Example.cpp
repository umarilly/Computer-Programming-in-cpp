
/*
    Program in C++ to demonstrate the use of the while loop to print the square of numbers from 0 to 9
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int j = 0;
	while (j < 10) {
        // This block will be executed until the value of j is less than 10.
		cout << " square is : " << (j*j) << endl;
		j++; // Increment the value of j by 1, same as j = j + 1 or j += 1
	}
	cout << endl;

	_getch();
	return 0;
}