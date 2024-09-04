
/*
    Program in C++ to calculate the grade of a student based on the marks obtained.
*/

#include<iostream> 
#include<conio.h>

using namespace std;

int main()  {

    int a; // Declare a variable to store the marks of the student.
    cout << "Enter the marks of student : "; // Ask the user to enter the marks.
    cin >> a; // Read the marks from the user.

    if (a >= 90) {
        cout << "you got A+"; // This line will be printed only if the marks are greater than or equal to 90.
    }
    else if (a >= 80) {
        cout << "you got A"; // This line will be printed only if the marks are greater than or equal to 80.
    }
    else if (a >= 70) {
        cout << "you got B"; // This line will be printed only if the marks are greater than or equal to 70.
    }
    else if (a >= 60) {
        cout << "you got C";// This line will be printed only if the marks are greater than or equal to 60.
    }
    else {
        cout << "you Aare fail"; // This line will be printed only if the marks are less than 60.
    }
    
    _getch();
    return 0;
}