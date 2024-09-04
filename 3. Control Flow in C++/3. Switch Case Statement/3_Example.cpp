
/*
    Program in C++ to perform the basic arithmetic operations based on the user input using switch case statement.
*/

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
            // This block will be executed only if the value of op is '+'.
            cout << "Addition of " << a << " & " << b << " is " << (a + b) << endl;
            break;
        } case '-': {
            // This block will be executed only if the value of op is '-'.
            cout << "subtraction of " << a << " & " << b << " is " << (a - b) << endl;
            break;
        } case '*': {
            // This block will be executed only if the value of op is '*'.
            cout << "Multiplication of " << a << " & " << b << " is " << (a * b) << endl;
            break;
        } case '/': {
            // This block will be executed only if the value of op is '/'.
            cout << "Division of " << a << " & " << b << " is " << (a / b) << endl;
            break;
        } case '%':{
            // This block will be executed only if the value of op is '%'.
            cout << "Mod of " << a << " & " << b << " is " << (a % b) << endl;
            break;
        } default: {
            // This block will be executed only if the value of op is not any of the above.
            cout << "Invalid Entry" << endl;
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
