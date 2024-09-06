
/*
    Program in C++ to demonstrate the use of break statement.
*/

#include<iostream> 
#include<conio.h>

using namespace std;

int main() {

    int a , b = 1, c; // Declaring three variables of integer type

    cout << "Enter a Number to find its Table : ";
    cin >> a;
    cout << "So, You have asked for the table of : " << a << endl;
    
    do
    {
        if (a >= 15 && a <= 19) {
            // Break statement will terminate the loop when the 'a' is between 15 and 19
            cout << "Tables not available";
            break;
        } else {
            // Else, the table will be printed
            c = a * b;
            cout << a << "x" << b << "=" << c << endl;
            b++;
        }
    } while (b <= 10);
    
    cout << "Thank you for using our service" << endl; // Always printed

    _getch();
    return 0;
}