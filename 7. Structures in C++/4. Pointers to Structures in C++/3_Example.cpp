#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct Item {
    string name;      
    int quantity;     
    double price;   
};

int main() {

    Item inventoryItem = {"Laptop", 15, 999.99};

    Item *itemPtr = &inventoryItem;

    cout << "Item Name: " << itemPtr->name << endl;
    cout << "Quantity in Stock: " << itemPtr->quantity << endl;
    cout << "Price per Unit: $" << itemPtr->price << endl;

    itemPtr->quantity += 10;  
    itemPtr->price = 949.99;  

    cout << "\nUpdated Item Details:" << endl;
    cout << "Item Name: " << itemPtr->name << endl;
    cout << "Updated Quantity in Stock: " << itemPtr->quantity << endl;
    cout << "Updated Price per Unit: $" << itemPtr->price << endl;

    _getch(); 
    return 0;
}