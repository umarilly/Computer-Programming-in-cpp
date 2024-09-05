
/*
    Program in C++ to find the cube of numbers from 0 to 10 using a for loop.
*/

#include <iostream>
#include <conio.h>
#include <iomanip> // For setw() function, which is used for proper spacing

using namespace std;

int main() {

    int a, b = 0; // Declaring two variables a and b, and initializing b to 0

    for (a = 0; a <= 10; a++) {
        // Finding the cube of the number
        b = a * a * a;
        cout << "The cube of " << setw(3) << a << "  is " << setw(6) << b << endl;
    }

    _getch();
    return 0;
}
