
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct Car {
    string make;      
    string model;     
    int year;        
    float price;
};

int main() {
    Car c;
    c.make = "Toyota";
    c.model = "Corolla";
    c.year = 2022;
    c.price = 25000.00;

    cout << "Car Details :- " << endl;
    cout << "Make : " << c.make << endl;
    cout << "Model : " << c.model << endl;
    cout << "Year : " << c.year << endl;
    cout << "Price : $" << c.price << endl;

    _getch();
    return 0;
}