
// Concept of Assignment in Pointers

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

    int a = 100, b = 88, c = 8; // Initializing three integer variables

    int* p1 = &a, *p2 = &b, *p3 = &c; // Initializing three pointers pointing to the variables

    // Printing the initial values of a, b, and c
    cout << "a = " << a << endl; 
    cout << "b = " << b << endl; 
    cout << "c = " << c << "\n\n"; 

    // Printing the memory addresses of a, b, and c
    cout << "&a = " << &a << endl; 
    cout << "&b = " << &b << endl; 
    cout << "&c = " << &c << "\n\n"; 

    // Printing the values pointed to by p1, p2, and p3
    cout << "*p1 = " << *p1 << endl; 
    cout << "*p2 = " << *p2 << endl; 
    cout << "*p3 = " << *p3 << "\n\n"; 

    // Printing the memory addresses stored in p1, p2, and p3
    cout << "p1 = " << p1 << endl; 
    cout << "p2 = " << p2 << endl; 
    cout << "p3 = " << p3 << "\n\n"; 

    p2 = p1;      // Assigning p2 to point to the same address as p1
    b = *p3;     // Assigning the value pointed to by p3 to b
    *p2 = *p3;  // Assigning the value pointed to by p3 to the location pointed to by p2

    // Printing the updated memory addresses and values
    cout << "p2 = " << p2 << endl; 
    cout << "p1 = " << p1 << endl; 
    cout << "*p3 = " << *p3 << endl; 
    cout << "b = " << b << endl; 
    cout << "*p3 = " << *p3 << endl; 
    cout << "*p2 = " << *p2 << "\n\n"; 

    // Printing the final values of a, b, and c
    cout << a << " " << b << " " << c; 

    _getch(); // Waiting for a key press
    return 0;
}