
#include<iostream>
#include<string>
#include<conio.h>

struct Address {
    std::string street;
    std::string city;
    std::string state;
    int zip;
};

struct Person {
    std::string name;
    int age;
    Address address; 
};

// Example usage
int main() {
    Person person;
    person.name = "John Doe";
    person.age = 30;
    person.address.street = "123 Main St";
    person.address.city = "Anytown";
    person.address.state = "PA";
    person.address.zip = 12345;

    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;
    std::cout << "Address: " << person.address.street << ", " << person.address.city << ", " << person.address.state << " " << person.address.zip << std::endl;

    _getch();
    return 0;
}