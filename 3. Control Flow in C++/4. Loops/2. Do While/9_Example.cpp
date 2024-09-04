
/*
    Program in C++ to find the sum and average of first n natural numbers using do while loop.
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int sum = 0, i = 1; // sum is initialized to 0 and i is initialized to 1
    int number; // number is the number of terms
	float average; // average is the average of the terms
	
    cout << " Enter the value of n : ";
	cin >> number;
	
    do {
        // sum is calculated by adding i to sum
		sum = sum + i;
		i = i + 1;
	} while (i <= number); // loop continues till i is less than or equal to number

	cout << " The sum is : " << sum << endl; // sum is displayed
	average = (float)sum / number; // average is calculated
	cout << " The average is : " << average << endl; // average is displayed

	_getch();
	return 0;
}