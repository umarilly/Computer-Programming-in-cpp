
// Program to demonstrate structure assignment and copying values in C++

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// Define a structure to represent a Person
struct Person {
    string name;  // Member variable to store the person's name
    int age;      // Member variable to store the person's age
    string city;  // Member variable to store the person's city
};

int main() {
    // Initialize a Person structure
    Person person1 = {"Alice", 30, "New York"};

    // Copying structure using assignment operator
    Person person2 = person1;  // All members of person1 are copied to person2

    // Modifying person2's data to show it is a separate copy
    person2.name = "Bob";  // Change the name of person2
    person2.age = 35;      // Change the age of person2
    person2.city = "Los Angeles";  // Change the city of person2

    // Display the details of person1 and person2
    cout << "Person 1 : " << person1.name << ", " << person1.age << ", " << person1.city << endl;
    cout << "Person 2 : " << person2.name << ", " << person2.age << ", " << person2.city << endl;

    _getch();
    return 0;
}