
// C++ program to demonstrate the basics of unions

#include <iostream>
#include <conio.h>

using namespace std;

// Define a union to represent a data container that can hold different data types
union Data {
    int intValue;       // Member to store an integer
    float floatValue;   // Member to store a float
    char charValue;     // Member to store a character
};

int main() {
    Data data;  // Declare a union variable

    // Assign an integer value to the union member
    data.intValue = 10;
    cout << "The Integer value is : " << data.intValue << endl;

    // Assign a float value to the union member (overwrites the previous integer value)
    data.floatValue = 5.5;
    cout << "The Floating value is : " << data.floatValue << endl;

    // Assign a character value to the union member (overwrites the previous float value)
    data.charValue = 'A';
    cout << "The Character value is : " << data.charValue << endl;

    // Note: Only the most recently assigned member will retain its value
    cout << "After assigning character, The Integer value is : " << data.intValue << endl;  // Output may be undefined
    cout << "After assigning character, The Floating value is : " << data.floatValue << endl;  // Output may be undefined

    _getch();
    return 0;
}