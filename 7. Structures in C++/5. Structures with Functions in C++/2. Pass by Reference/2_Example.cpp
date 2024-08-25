/*
    Program to demonstrate the use of structures with functions in C++ by returing a structure by reference.
*/

#include <iostream>
#include <string>   
#include <conio.h>  

using namespace std; 

// Define a structure to represent a Student
struct Student {
    string name;  // Member variable to store the student's name
    int age;      // Member variable to store the student's age
    double gpa;   // Member variable to store the student's GPA
};

// Function to create a Student structure and modify it by reference
void createStudentByReference(Student &s, string name, int age, double gpa) {
    s.name = name;  // Assign the passed name to the Student's name
    s.age = age;    // Assign the passed age to the Student's age
    s.gpa = gpa;    // Assign the passed GPA to the Student's GPA
}

int main() {
    Student student;  // Declare a Student structure variable

    // Call the function and pass the Student structure by reference
    createStudentByReference(student, "Alice", 20, 3.8);
    
    // Display the details of the Student modified by reference
    cout << "The Student Details (By Reference) :-" << endl;
    cout << "The Name is : " << student.name << endl;  // Print the student's name
    cout << "The Age is : " << student.age << endl;    // Print the student's age
    cout << "The GPA is : " << student.gpa << endl;    // Print the student's GPA

    _getch(); 
    return 0;
}