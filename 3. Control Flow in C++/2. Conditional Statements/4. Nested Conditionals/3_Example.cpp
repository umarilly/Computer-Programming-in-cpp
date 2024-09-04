
/*
    Program in C++ to demonstrate the use of nested if else statement.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int x = 13;
    if (x > 12) {
        // This block will be executed only if the value of x is greater than 12.
        if (x < 15) {
            // This block will be executed only if the value of x is less than 15.  
            cout << "Blue";
        }
    } else {
        // This block will be executed only if the value of x is not greater than 12.
        cout << "Green";
    }

    cout << "Jeans"; // This line will be printed regardless of the value of x.

    _getch();
    return 0;
}