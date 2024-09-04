

/*
    Program in C++ to perform the basic arithmetic operations based on the user input.
*/

#include<iostream> 
#include<conio.h>

using namespace std;

int main() {
    int a, b;
    int op;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    // Ask the user to enter the operation he wants to perform.
    cout << "Press 1 for addition \nPress 2 for subtraction  \nPress 3 for multiplication \nPress 4 for division \nPress 5 for modulus \n";
    cin >> op;


    if (op == 1) {
        // This block will be executed only if the value of op is 1.
        cout << "Addition of " << a << " & " << b << " is " << (a + b) << endl;
    } else if (op == 2) {
        // This block will be executed only if the value of op is 2.
        cout << "subtraction of " << a << " & " << b << " is " << (a - b) << endl;
    } else if (op == 3) {
        // This block will be executed only if the value of op is 3.
        cout << "Multiplication of " << a << " & " << b << " is " << (a * b) << endl;
    } else if (op == 4) {
        // This block will be executed only if the value of op is 4.
        cout << "Division of " << a << " & " << b << " is " << (a / b) << endl;
    } else if (op == 5) {
        // This block will be executed only if the value of op is 5.
        cout << "Mod of " << a << " & " << b << " is " << (a & b) << endl;
    } else {
        // This block will be executed only if the value of op is not any of the above.
        cout << "Invalid Entry" << endl;
    }

    _getch();
    return 0;
}
