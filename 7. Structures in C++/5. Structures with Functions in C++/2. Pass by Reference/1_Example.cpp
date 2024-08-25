/*
    Program to demonstrate the use of structures with functions in C++ by passing a structure to a function by reference.
*/

#include <iostream>
#include <string>   
#include <conio.h>  

using namespace std; // Use the standard namespace

// Define a structure to represent a Book
struct Book {
    string title;   // Member variable to store the book's title
    string author;  // Member variable to store the book's author
    int year;       // Member variable to store the book's publication year
};

// Function to print book details and modify them, passed by reference
void printBookByReference(Book &b) { // The function accepts a reference to a Book object
    cout << "Book Details Before Modification (Pass by Reference) :- " << endl;
    cout << "The Title is : " << b.title << endl;   // Print the book's title
    cout << "The Author is : " << b.author << endl; // Print the book's author
    cout << "The Year is : " << b.year << endl;     // Print the book's publication year

    // Modifying the original Book object (because it is passed by reference)
    b.title = "The Catcher in the Rye";  // Change the title of the book
    b.author = "J.D. Salinger";          // Change the author of the book
    b.year = 1951;                       // Change the publication year
}

int main() {
    // Initialize a Book structure with initial details
    Book b = {"The Great Gatsby", "F. Scott Fitzgerald", 1925};

    // Call the function passing the structure by reference
    printBookByReference(b);
    
    // Print book details after modification (from main function)
    cout << endl;
    cout << "Book Details After Modification (In main) : " << endl;
    cout << "The Title is : " << b.title << endl;   // Print the modified title
    cout << "The Author is : " << b.author << endl; // Print the modified author
    cout << "The Year is : " << b.year << endl;     // Print the modified year

    _getch(); 
    return 0;
}