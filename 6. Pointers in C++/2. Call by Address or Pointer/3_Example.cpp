

// Swapping of two integer variables without 3rd variable  - using call by pointer

#include<iostream>
#include<conio.h>
using namespace std;

void swapping(int* x, int* y) {
    *x = *x + *y; // Adding the value of y to x
    *y = *x - *y; // Subtracting the original value of y from the new value of x to get the original value of x
    *x = *x - *y; // Subtracting the new value of y from the new value of x to get the original value of y
}

int main() {

    int a = 10, b = 20;  // Initializing two integer variables

    // Printing the values of 'a' and 'b' before swapping
    cout << "Before Swapping :- " << endl;
    cout << "a = " << a << endl; // Outputs: a = 10
    cout << "b = " << b << endl; // Outputs: b = 20

    // Calling the swapping function and passing the addresses of 'a' and 'b'
    swapping(&a, &b);

    // Printing the values of 'a' and 'b' after swapping
    cout << "After Swapping :- " << endl;
    cout << "a = " << a << endl; // Expected output: a = 20
    cout << "b = " << b << endl; // Expected output: b = 10

    _getch();
    return 0;
}