
/*
    Program in C++ to demonstrate the use of if else statement.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int x = 26; // Initialize the variable x with 26.
    
    if (x / 2 == 12) {
        cout << "I like "; // This line will be printed only if the number is equal to 24.
    } else {
        cout << "I don\'t like "; // This line will be printed only if the number is not equal to 24.
    }

    cout << "apples"; // This line will always be printed.

    _getch();
    return 0;
}