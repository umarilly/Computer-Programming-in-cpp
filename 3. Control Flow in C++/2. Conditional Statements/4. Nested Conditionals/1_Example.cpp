
/*
    Program in C++ to calculate the grade of a student based on the marks obtained.
*/

#include<iostream> 
#include<conio.h>

using namespace std;

int main() {
    int a,b;
    cout << "Enter the marks of 1st student : ";
    cin >> a;
    cout << "Enter the marks of 2nd student : ";
    cin >> b;

    if (a >= 80) {
        // This block will be executed only if the marks of the 1st student are greater than or equal to 80.  
        if (b >= 60) {
            // This block will be executed only if the marks of the 2nd student are greater than or equal to 60.
            cout << "you got A";
        }
    }

    _getch();
    return 0;
}