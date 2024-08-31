
// C++ program to demonstrate the use of unions with type punning

#include <iostream>
#include <conio.h>

using namespace std;

// Define a union for type punning
union Number {
    int intValue;
    float floatValue;
};

int main() {
    Number num;  // Declare a union variable

    // Assign an integer value to the union
    num.intValue = 1065353216;  // This is a specific bit pattern that can be interpreted as a float

    // Interpret the same memory as a float
    cout << "Interpreted as integer : " << num.intValue << endl;  // Prints the integer value
    cout << "Interpreted as float : " << num.floatValue << endl;  // Interprets the bits as a float

    _getch();
    return 0;
}