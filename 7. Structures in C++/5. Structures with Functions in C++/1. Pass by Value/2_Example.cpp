/*
    Program to demonstrate the use of structures with functions in C++ by returing a structure by value.
*/

#include <iostream>
#include <string>   
#include <conio.h>  

using namespace std; // Use the standard namespace

// Define a structure to represent a Student
struct Student {
    string name;  // Member variable to store the student's name
    int age;      // Member variable to store the student's age
    double gpa;   // Member variable to store the student's GPA
};

// Function to create a Student structure and return it by value
Student createStudentByValue(string name, int age, double gpa) {
    Student s;           // Declare a local Student structure variable
    s.name = name;       // Assign the passed name to the Student's name
    s.age = age;         // Assign the passed age to the Student's age
    s.gpa = gpa;         // Assign the passed GPA to the Student's GPA
    return s;            // Return a copy of the Student structure
}

int main() {
    // Create a Student by calling the function and passing details; the function returns a copy
    Student student = createStudentByValue("Alice", 20, 3.8);
    
    // Display the details of the Student returned by value
    cout << "The Student Details (By Value) :-" << endl;
    cout << "The Name is : " << student.name << endl;  
    cout << "The Age is : " << student.age << endl;  
    cout << "The GPA is : " << student.gpa << endl;  

    _getch(); 
    return 0;
}