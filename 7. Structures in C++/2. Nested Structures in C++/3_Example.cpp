
/*
    Program to demonstrates the use of nested structures in C++
*/

#include <iostream>  
#include <conio.h>  

using namespace std; // Use the standard namespace to avoid prefixing with std::

struct DateOfBirth {
    int day;    // Member variable to store the day of birth
    int month;  // Member variable to store the month of birth
    int year;   // Member variable to store the year of birth
};

struct Student {
    string name;       // Member variable to store the student's name
    int rollNumber;    // Member variable to store the student's roll number
    DateOfBirth dob;   // Nested structure to store the student's date of birth
};

int main() {

    // Initialize a Student structure with name, roll number, and date of birth
    Student s = {"Emily Davis", 2104, {5, 11, 2003}};
    
    cout << "The Student Name : " << s.name << endl;
    cout << "The Roll Number is : " << s.rollNumber << endl;
    cout << "The Date of Birth is : " << s.dob.day << "/" << s.dob.month << "/" << s.dob.year << endl;

    _getch(); 
    return 0;  
}