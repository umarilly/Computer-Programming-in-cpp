
/*
    Program to demonstrate escape sequences in C++.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    // Demonstrating the newline escape sequence
    cout << "Hello, World!\n";  // Outputs "Hello, World!" followed by a new line

    // Demonstrating the tab escape sequence
    cout << "Name:\tJohn\n";  // Outputs "Name:    John" with a tab space between "Name:" and "John"

    // Demonstrating the backspace escape sequence
    cout << "123\b45\n";  // Outputs "1245" by removing the last character ('3') and adding '45'

    // Demonstrating the backslash escape sequence
    cout << "\\n is a newline character\n";  // Outputs "\n is a newline character", where \\ represents a single backslash

    // Demonstrating the single quote escape sequence
    cout << "It\'s a beautiful day\n";  // Outputs "It's a beautiful day" with a single quote correctly displayed

    // Demonstrating the double quote escape sequence
    cout << "She said, \"Hello!\"\n";  // Outputs "She said, "Hello!"" with quotes around Hello!

    // Demonstrating the null character escape sequence
    char str[] = "He\0lloWorld";  // Creates a string with a null character in the middle
    cout << "String with null character: " << str << endl;  // Outputs "He" because the null character terminates the string

    _getch(); 
    return 0;
}