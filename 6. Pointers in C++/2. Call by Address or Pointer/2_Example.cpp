
// Swapping of two integer variables using a third variable - using call by pointer

#include<iostream>
#include<conio.h>
using namespace std;

void swapping(int* x, int *y) {
    int z; // Declaring a temporary variable to hold the value during swap
    z = *x; // Storing the value pointed to by x in temp
    *x = *y; // Assigning the value pointed to by y to the location pointed to by x
    *y = z; // Assigning the value stored in temp to the location pointed to by y
}

int main() {

    int a = 10, b = 20;      // Initializing two integer variables

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