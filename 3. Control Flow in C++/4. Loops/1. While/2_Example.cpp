
/*
    Program in C++ to demonstrate the use of the while loop.
*/

#include<iostream> 
#include<conio.h>

using namespace std;

int main() {

    int a;
    cout << "Enter the number : ";
    cin >> a;

    while (a <= 6) {
        // This block will be executed until the value of a is less than or equal to 6.
        cout << "Answer is " << a * a << "\n";
        a++;
    }

    _getch();
    return 0;
}