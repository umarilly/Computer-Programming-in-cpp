
/*
    Program to demonstrate the use of structures with functions in C++ by passing a structure to a function by value.
*/

#include <iostream>
#include <string>   
#include <conio.h>  

using namespace std; 

// Define a structure to represent a Book
struct Book {
    string title;   // Member variable to store the book's title
    string author;  // Member variable to store the book's author
    int year;       // Member variable to store the publication year
};

// Function to print book details, passed by value
void printBookByValue(Book b) {
    // Print book details before modification
    cout << "Book Details Before Modification (Pass by Value) :- " << endl;
    cout << "The Title is : " << b.title << endl;
    cout << "The Author is : " << b.author << endl;
    cout << "The Year is : " << b.year << endl;

    // Modify the book details (this does not affect the original structure)
    b.title = "The Catcher in the Rye";
    b.author = "J.D. Salinger";
    b.year = 1951;
}

int main() {
    // Initialize a Book structure with initial details
    Book b = {"The Great Gatsby", "F. Scott Fitzgerald", 1925};

    // Call the function to print book details (pass by value)
    printBookByValue(b);
    
    // Print book details after modification (from main function)
    cout << endl;
    cout << "Book Details After Modification (In main) : " << endl;
    cout << "The Title is : " << b.title << endl;
    cout << "The Author is : " << b.author << endl;
    cout << "The Year is : " << b.year << endl;

    _getch(); 
    return 0;
}