
/*
    Program to demonstrate the use of structures with functions in C++ by returing a structure by pointer.
*/

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// Define a structure to represent a Student
struct Student {
    string name;
    int age;
    double gpa;
};

// Function to return a pointer to a Student structure
Student* createStudentByPointer(string name, int age, double gpa) {
    Student *s = new Student; // Allocate memory for a Student on the heap
    s->name = name;
    s->age = age;
    s->gpa = gpa;
    return s; // Returning a pointer to the structure
}

int main() {
    // Create a Student by pointer
    Student *student2 = createStudentByPointer("Bob", 22, 3.6);
    
    cout << endl  << "The Student Details are (By Pointer) :-" << endl;
    cout << "The Name is : " << student2->name << endl;
    cout << "The Age is : " << student2->age << endl;
    cout << "The GPA is : " << student2->gpa << endl;

    // Free allocated memory
    delete student2;

    _getch();
    return 0;
}