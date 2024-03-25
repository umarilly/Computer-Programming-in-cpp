#include<iostream> 
#include<conio.h>
using namespace std;
int main() {
    int a, b;
    char op;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Which operation do you want to perform : ";
    cin >> op;
    switch (op) {
        case '+': {
            cout << "Addition of " << a << " & " << b << " is " << (a + b) << endl;
            break;
        }
        case '-': {
            cout << "subtraction of " << a << " & " << b << " is " << (a - b) << endl;
            break;
        }
        case '*': {
            cout << "Multiplication of " << a << " & " << b << " is " << (a * b) << endl;
            break;
        }
        case '/': {
            cout << "Division of " << a << " & " << b << " is " << (a / b) << endl;
            break;
        }
        case '%':{
            cout << "Mod of " << a << " & " << b << " is " << (a % b) << endl;
            break;
        }
    }
    _getch();
    return 0;
}



/*
Another Method:

#include<iostream> 
#include<conio.h>
using namespace std;
int main()
{
    int a, b;
    int op;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Press 1 for addition \nPress 2 for subtraction  \nPress 3 for multiplication \nPress 4 for division \nPress 5 for modulus \n";
    cin >> op;
    switch (op) {
    case 1: {
            cout << "Addition of " << a << " & " << b << " is " << (a + b) << endl;
            break;
        }
        case 2: {
            cout << "subtraction of " << a << " & " << b << " is " << (a - b) << endl;
            break;
        }
        case 3: {
            cout << "Multiplication of " << a << " & " << b << " is " << (a * b) << endl;
            break;
        }
        case 4: {
            cout << "Division of " << a << " & " << b << " is " << (a / b) << endl;
            break;
        }
        case 5: {
            cout << "Mod of " << a << " & " << b << " is " << (a % b) << endl;
            break;
        }
    }
    _getch();
    return 0;
}

*/
