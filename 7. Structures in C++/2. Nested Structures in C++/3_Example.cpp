#include <iostream>

using namespace std;

// Define a structure to represent the Date of Birth
struct DateOfBirth {
    int day;    // Member variable to store the day of birth
    int month;  // Member variable to store the month of birth
    int year;   // Member variable to store the year of birth
};

// Define a structure to represent a Student
struct Student {
    string name;           // Member variable to store the student's name
    int rollNumber;        // Member variable to store the student's roll number
    DateOfBirth dob;       // Nested structure to store the student's date of birth
};

int main() {

    // Create an instance of Student and initialize its members
    Student student = {"Emily Davis", 2104, {5, 11, 2003}};

    // Access and display the members of the nested structure
    cout << "Student Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Date of Birth: " << student.dob.day << "/" << student.dob.month << "/" << student.dob.year << endl;

    return 0;
}
