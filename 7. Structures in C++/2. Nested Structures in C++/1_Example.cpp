
/*
    Program to demonstrates the use of nested structures in C++
*/

#include <iostream>
#include <conio.h>

using namespace std;

// Define a structure to represent a Date
struct Date {
    int day;    // Member variable to store the day
    int month;  // Member variable to store the month
    int year;   // Member variable to store the year
};

// Define a structure to represent an Employee
struct Employee {
    string name;    // Member variable to store the employee's name
    int id;         // Member variable to store the employee's ID
    Date joinDate;  // Nested structure to store the employee's joining date
};

int main() {

    // Create an instance of Employee and initialize its members
    Employee emp = {"Smith Watson", 12345, {15, 7, 2010}};

    // Access and display the members of the nested structure
    cout << "The Employee Name is : " << emp.name << endl;
    cout << "The Employee ID is : " << emp.id << endl;
    cout << "The Joining Date is : " << emp.joinDate.day << "/" << emp.joinDate.month << "/" << emp.joinDate.year << endl;

    _getch();
    return 0;
}