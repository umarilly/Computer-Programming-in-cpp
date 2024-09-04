
/*
    Program in C++ to demonstrate the use of if else statement to check whether a number is even or odd.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    
    int num;
    cout << "Enter a number : ";
    cin >> num;

    // If the number is divisible by 2 then it is an even number else it is an odd number.
    if (num % 2 == 0) {
        cout << "It is an even number"; // This line will be printed only if the number is even.
    }
    else {
        cout << "It is an odd number "; //  This line will be printed only if the number is odd.
    }

    _getch();
    return 0;
}