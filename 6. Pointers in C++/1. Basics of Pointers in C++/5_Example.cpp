
// Example to explain the basic use of pointers

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a = 7;
    int *aPtr;
    aPtr = &a;

    cout << "The value of a is " << a << endl; // Prints the value of "a" which is 7
    cout << "The value of *aPtr is " << *aPtr << endl; // Prints the value "7", dereferencing the pointer aPtr
    cout << "The address of a is " << &a << endl; // Prints the address of a
    cout << "The value of aPtr is " << aPtr << endl; // Prints the address stored in aPtr - which is the address of a variable

    _getch();
    return 0;
}