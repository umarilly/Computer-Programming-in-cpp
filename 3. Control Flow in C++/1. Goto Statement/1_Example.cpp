
/*
    Program in C++ to demonstrate the use of goto statement.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int i = 0;
    loop: // This is the label
    cout << i << " ";
    i++;
    if (i < 5) {
        goto loop; // This is the goto statement, it will jump to the label loop
    }

    _getch();
    return 0;
}