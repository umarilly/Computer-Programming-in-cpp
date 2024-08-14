
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

struct Address {
    string street;
    string city;
    string state;
    int zip;
};

struct Person {
    string name;
    int age;
    Address address; 
};

// Example usage
int main() {
    Person p;
    p.name = "Smith John";
    p.age = 55;
    p.address.street = "560 Main Street";
    p.address.city = "Downtown";
    p.address.state = "LA";
    p.address.zip = 44000;

    cout << "The Name is : " << p.name << endl;
    cout << "The Age is : " << p.age << endl;
    cout << "The complete Address is : " << p.address.street << ", " << p.address.city << ", " << p.address.state << " " << p.address.zip << endl;

    _getch();
    return 0;
}