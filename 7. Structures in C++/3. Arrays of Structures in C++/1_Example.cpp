
/*
    Program that demonstrates the use of an array of structures in C++
*/

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

// Define a structure to represent a Book
struct Book {
    string title;    // Member variable to store the book's title
    string author;   // Member variable to store the book's author
    int year;        // Member variable to store the year of publication
};

int main() {

    // Initialize an array of Book structures with data for three books
    const int size = 3;
    Book library[size] = {
        {"The Great Gatsby", "F. Scott Fitzgerald", 1925},
        {"1984", "George Orwell", 1949},
        {"To Kill a Mockingbird", "Harper Lee", 1960}
    };

    // Loop through the array and display the details of each book
    for (int i = 0; i < size; i++) {
        cout << "Book Title : " << library[i].title << endl;
        cout << "Author : " << library[i].author << endl;
        cout << "Year of Publication : " << library[i].year << endl;
        cout << "-----------------------------" << endl;
    }

    _getch();
    return 0;
}