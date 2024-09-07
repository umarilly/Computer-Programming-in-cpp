
/*
    Program in C++ to demonstrate the declaration and initialization of an array.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

    int arr[10] = {1,2,3,4,5}; // Here the array is decleared and Initialized

    int i = 0 ; // Loop variable
    while ( i < 5 ) {
        // Printing the elements of the array
        cout << arr[i] << " ";
        i++; // Incrementing the loop variable
    }

    _getch();
	return 0;
}