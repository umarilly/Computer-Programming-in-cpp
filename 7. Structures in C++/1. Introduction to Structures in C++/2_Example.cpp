
/*
    Program to demonstrates the use of a structure in C++ to store and display information about a book.
*/ 

#include <iostream>
#include <conio.h>

using namespace std; 

// Define a structure named 'Book' to hold information about a book
struct Book {
    string title;      // Member variable to store the book's title
    string author;     // Member variable to store the author's name
    int publicationYear; // Member variable to store the publication year
    float price;       // Member variable to store the price of the book
};

int main() {
    Book b;  // Declare a variable 'book1' of type 'Book'

    // Assign values to the 'book1' structure members
    b.title = "The Great Gatsby";  
    b.author = "F. Scott Fitzgerald";
    b.publicationYear = 1925;
    b.price = 10.99;

    // Output the book's details to the console
    cout << "The Book Title is : " << b.title << endl;
    cout << "The Author Name is : " << b.author << endl;
    cout << "The Publication Year is : " << b.publicationYear << endl;
    cout << "The Price is : " << "$" << b.price << endl;

    _getch();
    return 0;
}