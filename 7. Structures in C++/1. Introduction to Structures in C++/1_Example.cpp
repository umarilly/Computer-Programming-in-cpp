/*
    Program to demonstrates the use of a structure in C++ to store and display information about a person.
*/ 

#include <iostream>  
#include <conio.h>   

using namespace std; 

// Define a structure named 'Person' to hold information about a person
struct Person {
    string name;   // Member variable to store the person's name
    int age;       // Member variable to store the person's age
    float height;  // Member variable to store the person's height in meters
};

int main() {
    Person p;  // Declare a variable 'p' of type 'Person'

    p.name = "John Doe";  // Assign the name "John Doe" to the 'name' member of 'p'
    p.age = 30;           // Assign the age 30 to the 'age' member of 'p'
    p.height = 1.75;      // Assign the height 1.75 meters to the 'height' member of 'p'

    // Output the name, age, and height of the person to the console
    cout << "The Name is : " << p.name << endl;  
    cout << "The Age is : " << p.age << endl;    
    cout << "The Height is : " << p.height << " meters" << endl;

    _getch();  
    return 0; 
}