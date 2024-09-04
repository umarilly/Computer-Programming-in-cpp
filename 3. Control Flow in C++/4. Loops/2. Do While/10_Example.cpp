/*
    Program in C++ to find the factorial of a number using do-while loop.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {

    int number, counter = 1; // counter is initialized to 1
    int factorial = 1; // factorial is initialized to 1

    cout << "Enter a positive integer: ";
    cin >> number;

    do {
        // factorial is calculated by multiplying counter to factorial
        factorial = factorial * counter;
        counter++;
    } while (counter <= number); // loop continues until counter is less than or equal to number

    cout << "Factorial of " << number << " is " << factorial;

    _getch();
    return 0;
}
