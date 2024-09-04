
/*
    Program in C++ to demonstrate the use of if statement.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main () {

    int num;
    cout << "Please enter the number : ";
    cin >>  num;

    if ( num <= 10 ) {
        cout << "Number is greater\n"; // This line will be printed only if the number is less than or equal to 10.
    }

    cout << "This is outside of if statement"; // This line will always be printed.

    _getch();
    return 0;
}