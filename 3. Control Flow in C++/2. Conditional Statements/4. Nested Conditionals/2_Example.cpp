
/*
    Program in C++ to demonstrate the use of nested conditionals.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int x = 10;
    int y = 20;

    if (x == 10) {
        // This block will be executed only if the value of x is 10.
        cout << "x is 10" << endl;
        if (y == 20) {
            // This block will be executed only if the value of y is 20.
            cout << "y is 20" << endl;
        } else {
            // This block will be executed only if the value of y is not 20.
            cout << "y is not 20." << endl;
        }
    } else {
        // This block will be executed only if the value of x is not 10.
        cout << "x is not 10." << endl;
    }

    _getch();
    return 0;
}