
// Program to explain the concept of Pointer to Pointer using character

#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    char a = 'z';  // Initialize a character variable
    char* b;       // Declare a pointer to char
    b = &a;        // Store the address of 'a' in pointer 'b'

    cout << "Value of a : " << a << endl;        // Print value of 'a'
    cout << "Value pointed to by b : " << *b << endl; // Print value pointed to by 'b'
    cout << "Address of a : " << &a << endl;     // Print address of 'a'
    cout << "Value of b (address of a) : " << b << endl; // Print value of 'b'

    cout << endl;
    char** c;      // Declare a pointer to a pointer to char
    c = &b; // Store the address of 'b' in pointer 'c'

    cout << "Value of b (address of a) : " << b << endl;  // Print value of 'b'
    cout << "Value pointed to by c (address of a) : " << *c << endl; // Print value pointed to by 'c'
    cout << "Value pointed to by *c (value of a) : " << **c << endl; // Print value pointed to by '*c'
    cout << "Address of b : " << &b << endl;        // Print address of 'b'
    cout << "Value of c (address of b) : " << c << endl; // Print value of 'c'

    _getch();
    return 0;
}