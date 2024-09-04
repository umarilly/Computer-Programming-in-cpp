
/*
    Program in C++ to print the cube of the numbers from 1 to 10 using the while loop
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int number = 1;
    int cube = 1;

	while (cube < 999) {
        // This block will be executed until the value of cube is less than 999.
		cube = number * number * number;
		cout << "The Cube of " << number << " is : " << cube << endl;
		number++; // Increment the value of number by 1, same as number = number + 1 or number += 1
	}

    _getch();
	return 0;
}