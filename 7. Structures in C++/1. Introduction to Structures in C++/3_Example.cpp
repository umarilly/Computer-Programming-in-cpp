
/*
    Program to demonstrates the use of a structure in C++ with Arrays
*/ 

#include <iostream>  // Include the iostream library for input and output
#include <conio.h>   // Include the conio.h library for console input/output functions

using namespace std; // Use the standard namespace

// Define a structure named 'Student' to hold information about a student
struct Student {
    string name;       // Member variable to store the student's name
    int rollNumber;    // Member variable to store the student's roll number
    float marks;       // Member variable to store the student's marks
};

int main() {

    const int size = 3;  // Define a constant to specify the number of students
    // Initialize an array of 'Student' structures with data for three students
    Student students[size] = {
        {"Alice", 74563, 85.5},
        {"Bob", 74584, 90.0},
        {"Charlie", 74456, 78.0}
    };

    // Loop through the array of students and print each student's details
    for (int i = 0; i < size; i++) {
        cout << "The Student Name is : " << students[i].name << endl;          // Output the student's name
        cout << "The Roll Number is : " << students[i].rollNumber << endl;     // Output the student's roll number
        cout << "The Marks are : " << students[i].marks << endl;               // Output the student's marks
        cout << "-----------------------------" << endl;                       // Print a separator line
        cout << endl << endl;  // Print extra newline for spacing
    }

    _getch();  // Wait for a key press before exiting
    return 0;  // Return 0 to indicate successful completion
}