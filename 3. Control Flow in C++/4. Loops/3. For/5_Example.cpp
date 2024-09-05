
/*
    Program in C++ to find the square of numbers from 0 to 100 using a for loop.
*/

#include<iostream> 
#include<conio.h>

using namespace std;

int main() {
    
    int a;
    int b = 0;

    for (a = 0; a <= 100; a++) {
        // Finding the square of the number
        b = a * a;
        cout << "The square of " << a << " is " << b << endl;
    }

    _getch();
    return 0;
}