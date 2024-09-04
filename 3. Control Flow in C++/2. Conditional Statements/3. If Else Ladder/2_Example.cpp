
/*
    Program in C++ to perform the basic arithmetic operations based on the user input.
*/

#include<iostream> 
#include<conio.h>

using namespace std;
int main()  {
    int a, b;
    char op;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Which operation do you want to perform : ";
    cin >> op;
    
    if (op == '+') {
        // This block will be executed only if the value of op is '+'.
        cout << "Addition of " << a << " & " << b << " is " << (a+b) << endl;
    }
    else if (op == '-') {
        // This block will be executed only if the value of op is '-'.
        cout << "subtraction of " << a << " & " << b << " is " << (a-b) << endl;
    } else if (op == '*') {
        // This block will be executed only if the value of op is '*'.
        cout << "Multiplication of " << a << " & " << b << " is " << (a*b) << endl;
    } else if (op == '/') {
        // This block will be executed only if the value of op is '/'.
        cout << "Division of " << a << " & " << b << " is " << (a/b) << endl;
    } else if (op == '%') {
        // This block will be executed only if the value of op is '%'.
        cout << "Mod of " << a << " & " << b << " is " << (a & b) << endl;
    } else {
        // This block will be executed only if the value of op is not any of the above.
        cout << "Invalid Entry" << endl;
    }

    _getch();
    return 0;
}