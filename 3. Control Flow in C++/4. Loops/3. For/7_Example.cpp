
/*
    Program in C++ to find the multiplication table of a number using a for loop.
*/

#include<iostream> 
#include<conio.h>

using namespace std;

int main() {

    int a, b = 1, c;
    
    for (a = 2; b <= 10; b++) {
        // Multiply the current value of 'a' with the current value of 'b'
        c = a * b;
        cout << a << "x" << b << "=" << c << endl;
    }

    _getch();
    return 0;
}