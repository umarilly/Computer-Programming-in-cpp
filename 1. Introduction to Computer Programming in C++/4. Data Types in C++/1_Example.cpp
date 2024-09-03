
/*
    Program in C++ to demonstrate data types in C++
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    /*  
        All the basic data types that are used in C++ programming
        1. int
        2. float
        3. void
        4. bool
        5. char
        6. double

        Note:
            There are more data types that are used in c++, They are mentioned in the document of Parent folder
    */


    // Integer
    int myInt = 42;
    cout << "Integer: " << myInt << endl;

    // Floating-point
    float myFloat = 3.14f;
    cout << "Float: " << myFloat << endl;

    /* 
        Void (no value)
        The void data type cannot be used to declare variables because it represents the absence of a type. It can use as return type of function.
    */

    // Boolean
    bool myBool = true;
    cout << "Boolean: " << myBool << endl;

    // Character
    char myChar = 'A';
    cout << "Character: " << myChar << endl;


    // Double
    double myDouble = 3.14159;
    cout << "Double: " << myDouble << endl;

    // Size of data types
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    _getch();
    return 0;
}