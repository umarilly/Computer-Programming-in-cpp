
/*
    Program that demonstrates the use of a pointer to a structure in C++ to store and display person details.
*/

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

// Define a structure to represent an Item in the inventory
struct Item {
    string name;      // Member variable to store the item name
    int quantity;     // Member variable to store the item quantity
    double price;     // Member variable to store the item price
};

int main() {
    // Initialize an Item structure
    Item inventoryItem = {"Laptop", 15, 999.99};

    // Declare a pointer to the Item structure
    Item *itemPtr = &inventoryItem;

    // Access and display the members of the structure using the pointer and the arrow operator
    cout << "Item Name: " << itemPtr->name << endl;
    cout << "Quantity in Stock: " << itemPtr->quantity << endl;
    cout << "Price per Unit: $" << itemPtr->price << endl;

    // Update item details using the pointer
    itemPtr->quantity += 10;  // Increase quantity by 10
    itemPtr->price = 949.99;  // Update the price to reflect a discount

    // Display updated item details
    cout << "\nUpdated Item Details:" << endl;
    cout << "Item Name: " << itemPtr->name << endl;
    cout << "Updated Quantity in Stock: " << itemPtr->quantity << endl;
    cout << "Updated Price per Unit: $" << itemPtr->price << endl;

    _getch(); 
    return 0;
}