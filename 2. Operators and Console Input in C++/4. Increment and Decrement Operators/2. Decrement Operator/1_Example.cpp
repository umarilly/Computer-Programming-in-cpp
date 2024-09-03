
/*
    Program in C++ to demonstrate the use of decrement operator.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    // Decrement Operator
    int a = 10;
    cout << "\nInitial value of a: " << a << endl;

    // Prefix Decrement
    cout << "Prefix Decrement: " << endl;
    cout << "Before decrementing, a is: " << a << endl;
    int b = --a; // Prefix decrement: decrements a first, then assigns the decremented value to b
    cout << "After prefix decrement, a is: " << a << ", b is: " << b << endl;

    // Postfix Decrement
    a = 10; // Reset a to 10
    cout << "Postfix Decrement: " << endl;
    cout << "Before decrementing, a is: " << a << endl;
    b = a--; // Postfix decrement: assigns the current value of a to b, then decrements a
    cout << "After postfix decrement, a is: " << a << ", b is: " << b << endl;

    _getch();
    return 0;
}