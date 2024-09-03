
/*
    Program in C++ to demonstrate the use of arithmetic operators.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int a = 10, b = 5;

    /*
        a and b are variables and they are decleared and initialized

        More ways are:
        int a; // a is declared
        a = 10; // a is initialized

    */

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    /*
        Note: For this example I have only used integer values, we can also use float, double or any data type according to resources
    */

    cout << "Sum : " << sum << endl;
    cout << "Difference : " << difference << endl;
    cout << "Product : " << product << endl;
    cout << "Quotient : " << quotient << endl;
    cout << "Remainder : " << remainder << endl;

    getch();   
    return 0;
}

/*
    We will discuss about increment and decrement operator in detial after some topics
*/