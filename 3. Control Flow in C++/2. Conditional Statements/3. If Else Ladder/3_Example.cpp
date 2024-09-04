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
    cout << "Press 1 for addition \nPress 2 for subtraction  \nPress 3 for multiplication \nPress 4 for division \nPress 5 for modulus \n";
    cin >> op;


    if (op == 1) {
        cout << "Addition of " << a << " & " << b << " is " << (a + b) << endl;
    }
    else if (op == 2) {
        cout << "subtraction of " << a << " & " << b << " is " << (a - b) << endl;
    }
    else if (op == 3) {
        cout << "Multiplication of " << a << " & " << b << " is " << (a * b) << endl;
    }
    else if (op == 4) {
        cout << "Division of " << a << " & " << b << " is " << (a / b) << endl;
    }
    else if (op == 5) {
        cout << "Mod of " << a << " & " << b << " is " << (a & b) << endl;
    }
    else {
        cout << "Invalid Entry" << endl;
    }

    _getch();
    return 0;
}
