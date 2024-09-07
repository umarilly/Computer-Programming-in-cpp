
/*
    Program in C++ to demonstrate the initialization of an array by user input and then display the array.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

    int arr[5]; // Here the array is decleared

    cout << "Please enter the elements of array : " << endl; // Asking the user to enter the elements of the array
    // Now taking the input from the user
    for ( int i = 0 ; i < 5 ; i++) {
        cout << "\nPlease Enter : ";
        cin >> arr[i];
        cout << "At index " << i << " the element is : " << arr[i] << endl; // Displaying the element at index i
    }

    int j = 0 ; // Loop variable
    cout << "\nThe Array is : ";
    // Printing the elements of the array
    while ( j < 5 ) {
        if ( j < 4 ) {
            cout << arr[j] << " , ";
        } else {
                cout << arr[j];
        }
        j++;
    }

    _getch();
	return 0;
}