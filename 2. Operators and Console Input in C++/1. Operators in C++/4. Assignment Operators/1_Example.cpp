
/*
Assignment Operators:
    - Assignment operators are used to assign values to variables.
    - There are many assignment operators, including the following:
        - =, +=, -=, *=, /=, %=
    - The assignment operator (=) assigns the value on the right to the variable on the left.
    - The other assignment operators perform the operation on the variable before assigning the value.
    - The following example shows the assignment operators in action.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int a = 10; // (=) , Means assigning the value 10 from right side to a which is on left side

    a += 5; // equivalent to a = a + 5
    cout << "a : " << a << endl;

    a -= 2; // equivalent to a = a - 2
    cout << "a : " << a << endl;

    a *= 3; // equivalent to a = a * 3
    cout << "a : " << a << endl;

    a /= 2; // equivalent to a = a / 2
    cout << "a : " << a << endl;

    a %= 3; // equivalent to a = a % 3
    cout << "a : " << a << endl;

    getch();   
    return 0;
}