
/*
    Program in C++ to demonstrate the use of the do-while loop.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int i; // Declare a variable i.

    do {
        // This block will be executed until the value of i is between 10 and 20.
        cout << "Please input a number between 10 and 20 : ";
        cin >> i;
    } while (i > 10 || i < 20); // Repeat the above block until the value of i is between 10 and 20.

    cout << "You entered over or under limit";

    _getch();
    return 0;
}