
/*
    Program in C++ to demonstrate the use of bitwise operators.
    Bitwise operators are used to perform bit-level operations on integers.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    
    int a = 5, b = 3; // 5 = 0101, 3 = 0011

    cout << "a & b: " << (a & b) << endl;   // bitwise AND
    cout << "a | b: " << (a | b) << endl;   // bitwise OR
    cout << "a ^ b: " << (a ^ b) << endl;   // bitwise XOR
    cout << "~a: " << (~a) << endl;         // bitwise NOT
    cout << "a << 1: " << (a << 1) << endl; // left shift
    cout << "a >> 1: " << (a >> 1) << endl; // right shift

    getch();
    return 0;
}