
#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int a = 10, b = 5; // Declaring and initializing two variables

    cout << "a == b: " << (a == b) << endl; // false
    cout << "a != b: " << (a != b) << endl; // true
    cout << "a > b: " << (a > b) << endl;   // true
    cout << "a < b: " << (a < b) << endl;   // false
    cout << "a >= b: " << (a >= b) << endl; // true
    cout << "a <= b: " << (a <= b) << endl; // false

    getch();   
    return 0;
}