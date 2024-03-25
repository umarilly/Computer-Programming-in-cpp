
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
        cout << "Addition of " << a << " & " << b << " is " << (a+b) << endl;
    }
    else if (op == '-') {
        cout << "subtraction of " << a << " & " << b << " is " << (a-b) << endl;
    }

    else if (op == '*') {
        cout << "Multiplication of " << a << " & " << b << " is " << (a*b) << endl;
    }
    else if (op == '/') {
        cout << "Division of " << a << " & " << b << " is " << (a/b) << endl;
    }
    else if (op == '%') {
        cout << "Mod of " << a << " & " << b << " is " << (a & b) << endl;
    }
    else {
        cout << "Invalid Entry" << endl;

    }

    _getch();
    return 0;
}
