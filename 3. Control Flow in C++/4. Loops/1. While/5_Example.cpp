
/*
    Program in C++ to demonstrate the use of the while loop.
*/

#include<iostream> 
#include<conio.h>

using namespace std;

int main() {
    
    char a;
    cout << "Would you like to have tea with me : ";
    cin >> a;

    while ((a == 'y') || (a == 'Y')) {
        // This block will be executed until the value of a is 'y' or 'Y'.2
        cout << "Ok! then come";
        cin >> a;
    }

    cout << "Not a problem!"; // This block will always be executed.

    _getch();
    return 0;
}