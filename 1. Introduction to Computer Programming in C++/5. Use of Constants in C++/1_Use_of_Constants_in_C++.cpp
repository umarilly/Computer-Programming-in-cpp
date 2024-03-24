#include <iostream>
using namespace std;

int main() {
    const int a = 100; // declaring a constant variable
    int b = 50;

    cout << "The value is : " << a << endl;

    // a = 200; 
    // trying to assign a new value to a constant variable. This will result in a compilation error

    cout << "Value before modification: " << b << endl;
    b = 75; // modifying a non-constant variable
    cout << "Value after modification: " << b << endl;

    return 0;
}

/*
    In this example, "a" is declared as a constant variable using the const keyword. Once a value is assigned to "a", it cannot be modified. Attempting to assign a new value to "a" will result in a compilation error.

    On the other hand, the variable "b" is not declared as const, so its value can be modified during the program execution.
*/
