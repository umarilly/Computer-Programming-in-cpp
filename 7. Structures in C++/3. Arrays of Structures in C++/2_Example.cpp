
/*
    Program to demonstrate the use of an array of structures in C++
*/

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

// Define a structure to represent a Product
struct Product {
    string name;      // Member variable to store the product's name
    int productID;    // Member variable to store the product's ID
    double price;     // Member variable to store the product's price
    int quantity;     // Member variable to store the product's quantity in stock
};

int main() {

    // Initialize an array of Product structures with data for five products
    const int size = 5;
    Product inventory[size] = {
        {"Laptop", 101, 999.99, 20},
        {"Smartphone", 102, 699.99, 35},
        {"Tablet", 103, 399.99, 15},
        {"Smartwatch", 104, 199.99, 25},
        {"Headphones", 105, 149.99, 50}
    };

    // Display the details of each product in the inventory
    for (int i = 0; i < size; i++) {
        cout << "Product Name: " << inventory[i].name << endl;
        cout << "Product ID: " << inventory[i].productID << endl;
        cout << "Price: $" << inventory[i].price << endl;
        cout << "Quantity in Stock: " << inventory[i].quantity << endl;
        cout << "-----------------------------------" << endl;
    }

    // Modify the quantity of a specific product
    inventory[2].quantity = 10;  // Reducing the quantity of the "Tablet" by 5 units

    // Display the updated details of the "Tablet"
    cout << "\nUpdated Product:" << endl;
    cout << "Product Name: " << inventory[2].name << endl;
    cout << "Product ID: " << inventory[2].productID << endl;
    cout << "Price: $" << inventory[2].price << endl;
    cout << "Quantity in Stock: " << inventory[2].quantity << endl;
    cout << "-----------------------------------" << endl;

    _getch();
    return 0;
}