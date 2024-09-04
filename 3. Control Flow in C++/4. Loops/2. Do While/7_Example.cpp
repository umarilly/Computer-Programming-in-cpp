
/*
    Program in C++ to print the table of a number using the do-while loop.
*/

#include<iostream> 
#include<conio.h>

using namespace std;

int main() {

    int a , b = 1, c; // Declare a, b, and c.

    cout << "Enter a Number to find its Table : ";
    cin >> a;
    cout << "You asked for the table of : " << a << endl;

    do {
        // This block will be executed until the value of b is less than or equal to 10.
        c = a * b;
        cout << a << "x" << b << "=" << c << endl;
        b++;
    } while (b <= 10); // Repeat the above block until the value of b is less than or equal to 10.

    _getch();
    return 0;
}