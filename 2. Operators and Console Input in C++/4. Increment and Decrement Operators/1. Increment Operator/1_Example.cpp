
/*
    Program in C++ to demonstrate the use of increment operator.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    
    // Increment Operator
    int x = 5;
    cout << "Initial value of x: " << x << endl;

    // Prefix Increment
    cout << "Prefix Increment: " << endl;
    cout << "Before incrementing, x is: " << x << endl;
    int y = ++x; // Prefix increment: increments x first, then assigns the incremented value to y
    cout << "After prefix increment, x is: " << x << ", y is: " << y << endl;

    // Postfix Increment
    x = 5; // Reset x to 5
    cout << "Postfix Increment: " << endl;
    cout << "Before incrementing, x is: " << x << endl;
    y = x++; // Postfix increment: assigns the current value of x to y, then increments x
    cout << "After postfix increment, x is: " << x << ", y is: " << y << endl;

    getch();
    return 0;
}