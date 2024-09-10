
/*
    Program in C++ to declare and initialize a 2D array of size 3x3 and print the values of the array using nested for loop.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int abc[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Declaration & Initialization
    int i, j;
    cout << "The value of 2-D array are : \n"; // Printing of Initialized Vales

    for (i = 0; i < 3; i++) {
        // Nested for loop for printing of values of 2D array
        for (j = 0; j < 3; j++) {
            cout << abc[i][j] << "  "; // Printing of values of 2D array
        }
        cout << "\n";
    }

    _getch();
    return 0;
}