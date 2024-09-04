
/*
    Program in C++ to demonstrate the use of if else statement.
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
    } else {
        cout << "Number is smaller"; // This line will be printed only if the number is greater than 10.
    }

    _getch();
    return 0;
}