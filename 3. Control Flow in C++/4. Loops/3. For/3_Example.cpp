
/*
    Program in C++ to demonstrate the use of for loop.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    
    int a;
    int b = 0;
    
    for (a = 2; a <= 100; a = a + 2) {
        // This block of code will be executed 50 times
        b = b + a;
    }

    // This line of code will be executed only once and always executed
    cout << "The sum of even numbers from zero to hundrad is : " << b << endl;

    _getch();
    return 0;
}