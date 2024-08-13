#include <iostream>

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
    Employee emp = {"Alice Johnson", 12345, {15, 7, 2010}};

    // Access and display the members of the nested structure
    cout << "Employee Name: " << emp.name << endl;
    cout << "Employee ID: " << emp.id << endl;
    cout << "Joining Date: " << emp.joinDate.day << "/" << emp.joinDate.month << "/" << emp.joinDate.year << endl;

    return 0;
}