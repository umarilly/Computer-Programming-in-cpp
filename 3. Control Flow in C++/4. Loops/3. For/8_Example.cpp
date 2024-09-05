
/*
    Program in C++ to find the multiplication table of any number using a for loop.
*/

#include<iostream> 
#include<conio.h>

using namespace std; 

int main() {

    int a, b = 1, c;

    cout << "Enter the number whose table you want to find : ";
    cin >> a; // Input the number whose table you want to find

    for (; b <= 10; b++) {
        // Multiply the current value of 'a' with the current value of 'b'
        c = a * b;
        cout << a << "x" << b << "=" << c << endl; // Display the result
    }

    _getch();
    return 0;
}