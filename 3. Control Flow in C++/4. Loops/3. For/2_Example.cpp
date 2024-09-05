
/*
    Program in C++ to demonstrate the use of for loop.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int a, b; // variable declaration

    for (a = 1, b = 10; a <= 10, b >= 1; a++, b--) {
        // This block of code will be executed 10 times
        cout << "a : " << a << "\tb : " << b << endl;
    }

    _getch();
    return 0;
}