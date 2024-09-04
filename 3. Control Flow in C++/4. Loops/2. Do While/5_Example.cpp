
/*
    Program in C++ to check whether a number is prime or not using a do-while loop.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    
    int divisor = 2, dividend, remainder; // Initialize divisor with 2, and declare dividend and remainder.

    cout << "Please input a positive integer : ";
    cin >> dividend;

    do {
        // This block will be executed until the value of divisor is less than the dividend and remainder is not equal to 0.
        remainder = dividend % divisor;
        divisor++;
    } while (divisor < dividend && remainder != 0);

    // If the loop ends and divisor equals the dividend, it means the dividend is prime.
    if (divisor == dividend) {
        cout << dividend << " is a prime number" << endl;
    } else {
        cout << dividend << " is not a prime number" << endl;
    }

    _getch();
    return 0;
}