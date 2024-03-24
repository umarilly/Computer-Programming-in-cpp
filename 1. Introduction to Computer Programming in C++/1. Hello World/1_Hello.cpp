

// This program will only show the basic syntex of C++ Program.

/*
    C++ program mainly consist of 3 parts
    1. Preprocessor directives
    2. The main() function
    3. C++ statements
*/

/*
    For Details Regarding the thoery of "Introduction to Computer Programming in C++" can be found on the given LinkedIn account "https://www.linkedin.com/in/umarilly/".
*/


#include<iostream> 
// This line includes the input/output stream library, which allows you to use functions like cout for output and cin for input.

#include<conio.h> 
// This line includes the conio.h header file, which provides console input/output functions. However, note that conio.h is not a standard C++ header and may not be available on all compilers.

using namespace std; 
// This line declares that you're using the std namespace, which contains the standard C++ library functions.

// This is the main function, where your program starts execution.
int main() { 

    cout << "This is a Hello World Program"; // This line uses the cout (console output) object to print the string

    getch(); // This line uses the getch() function from the conio.h header to wait for a key press before continuing. This is often used to prevent the console window from closing immediately after the program finishes executing.

    return 0; // This line indicates that the program ended successfully. The value 0 is conventionally used to indicate success in C++ programs.
}

