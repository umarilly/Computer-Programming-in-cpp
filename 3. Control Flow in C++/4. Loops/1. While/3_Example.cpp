
/*
    Program in C++ to demonstrate the use of the while loop.
*/

#include<iostream> 
#include<conio.h>

using namespace std;

int main() {

    int x = 5;

    while (x >= 0)  {
        // This block will be executed until the value of x is greater than or equal to 0
        if (x >= 2)  {
            // This block will be executed until the value of x is greater than or equal to 2
            cout << "Value of x is : " << x << endl;
        } else {
            // This block will be executed until the value of x is less than 2
            cout << "Value of x is less than 2" << endl;
        }
        x = (x-1);
    }
    _getch();
    return 0;
}