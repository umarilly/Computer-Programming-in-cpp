
/*
    Program in C++ to demonstrate type casting.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a = 10;

    // Implicit conversion: 'a' is automatically converted to double for division
    double b = a / 3;

    cout << "The Sum is : " << a << endl;
    cout << "The Average is : " << b << endl;

    // Explicit casting using static_cast to convert 'a' to double before division
    b = static_cast<double>(a) / 3;
    cout << "The Average after static_cast is : " << b << endl;

    /*
    Following casting types are used with advance concepts like pointers and polymorphism, so we will see then later
        const_cast
        dynamic_cast
        reinterpret_cast
    */

    _getch();
    return 0;
}