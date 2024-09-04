
/*
    Program in C++ to demonstrate the use of the while loop.
*/

#include<iostream> 
#include<conio.h>

using namespace std;

int main() {

    int a = 1, totalMarks = 0, average, individualMarks;

    while (a <= 10) {
            // This block will be executed until the value of a is less than or equal to 10.
            cout << "Marks of student " << a << " is : ";
            cin >> individualMarks;
            a++;
            totalMarks = totalMarks + individualMarks;
        }

    average = static_cast<double>(totalMarks/ 10); // Calculate the average of the class

    cout << "Class average is : " << average; // Display the average of the class

    _getch();
    return 0;
}