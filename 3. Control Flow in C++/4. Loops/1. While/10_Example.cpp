
/*
    Program in C++ to find the factorial of a number using while loop.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {

    int number, counter = 1;
    int factorial = 1;

    cout << "Enter a positive integer : ";
    cin >> number;

    while (counter <= number) {
        // factorial is calculated by multiplying counter to factorial
        factorial = factorial * counter;
        counter++;
    }

    cout << "Factorial of " << number << " is " << factorial; // factorial is displayed

    _getch();
    return 0;
}