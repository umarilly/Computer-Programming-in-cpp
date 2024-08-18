#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct Address {
    string street; 
    string city;   
    int zipCode;  
};

struct Person {
    string name;     
    int age;        
    Address address;
};

int main() {

    Person person = {"Smith Will", 30, {"123 Main Street", "Springfield", 44000}};

    Person *personPtr = &person;

    cout << "Name: " << personPtr->name << endl;
    cout << "Age: " << personPtr->age << endl;
    cout << "Street: " << personPtr->address.street << endl;
    cout << "City: " << personPtr->address.city << endl;
    cout << "ZIP Code: " << personPtr->address.zipCode << endl;

    _getch();
    return 0;
}