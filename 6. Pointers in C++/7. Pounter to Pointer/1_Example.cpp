
// Program to explain the concept of Pointer to Pointer 

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int a = 10; // Initialize an integer variable a with value 10
    int *b;     // Declare a pointer to an integer
    b = &a;     // Store the address of a in pointer b

    cout << "The Value of a is : " << a << endl;         // Output the value of a
    cout << "The Value pointed to by b is : " << *b << endl; // Output the value pointed to by b (value of a)
    cout << "The Address of a is : " << &a << endl;      // Output the address of a
    cout << "The Value of b (Address of a) is : " << b << endl; // Output the value of b (address of a)
    cout << endl;

    int **c;    // Declare a pointer to a pointer to an integer
    c = &b;     // Store the address of b in pointer c

    cout << "The Value of b (Address of a) is : " << b << endl; // Output the value of b (address of a)
    cout << "The Value pointed to by c (Address of a) is : " << *c << endl; // Output the value pointed to by c (address of a)
    cout << "The Value pointed to by *c (Value of a) is : " << **c << endl; // Output the value pointed to by *c (value of a)
    cout << "The Address of b is : " << &b << endl;         // Output the address of b
    cout << "The Value of c (Address of b) is : " << c << endl; // Output the value of c (address of b)

    _getch();
    return 0;
}