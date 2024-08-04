#include <iostream>

using namespace std;

struct Person {
    string name;   
    int age;      
    float height;  
};

int main() {

    Person person1;

    person1.name = "John Doe";
    person1.age = 30;
    person1.height = 1.75;

    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << " meters" << endl;

    return 0;
}