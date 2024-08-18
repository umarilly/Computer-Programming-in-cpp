
/*
    Program that demonstrates the use of a pointer to a structure in C++ to store and display person details.
*/

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

// Define a structure to represent an Address
struct Address {
    string street;  // Member variable to store the street name
    string city;    // Member variable to store the city
    int zipCode;    // Member variable to store the ZIP code
};

// Define a structure to represent a Person
struct Person {
    string name;     // Member variable to store the person's name
    int age;         // Member variable to store the person's age
    Address address; // Nested structure to store the person's address
};

int main() {
    // Initialize a Person structure with address details
    Person person = {"Smith Jhon", 30, {"123 Main Street", "Springfield", 44000}};

    // Declare a pointer to the Person structure
    Person *personPtr = &person;

    // Access and display the members of the structure using the pointer and the arrow operator
    cout << "The Name is : " << personPtr->name << endl;
    cout << "The Age is: " << personPtr->age << endl;
    cout << "The Street is : " << personPtr->address.street << endl;
    cout << "The City : " << personPtr->address.city << endl;
    cout << "The ZIP Code : " << personPtr->address.zipCode << endl;

    _getch();
    return 0;
}