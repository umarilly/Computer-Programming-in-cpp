
/*
    Program in C++ to print the multiplication table of 2 using the do-while loop.
*/

#include<iostream> 
#include<conio.h>

using namespace std;

int main() {

    int a = 2, b = 1, c = 0; // Initialize a with 2, b with 1 and c with 0.
    
    do {
        c = a * b; // Multiply a and b and store the result in c.
        cout << a << "x" << b << "=" << c << endl; // Print the multiplication table of 2.
        b++;
    }  while (b <= 10); // Repeat the above block until the value of b is less than or equal to 10.

    _getch();
    return 0;
}
