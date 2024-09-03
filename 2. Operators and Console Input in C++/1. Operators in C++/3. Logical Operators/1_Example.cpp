
/*
    Program in C++ to demonstrate the use of logical operators.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    bool a = true, b = false;

    cout << "a && b: " << (a && b) << endl; // false
    cout << "a || b: " << (a || b) << endl; // true
    cout << "!a: " << !a << endl;           // false
    cout << "!b: " << !b << endl;           // true

    getch();
    return 0;
}