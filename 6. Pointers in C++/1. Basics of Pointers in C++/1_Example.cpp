
// Example to explain how the reference operator works

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

    int a = 100;
    cout << a;     // This will print out "100"
    cout << endl;
    cout << &a;    // This will print the memory address of the variable "a"
    // The memory address is the actual location in RAM where the variable "a" is stored.
    _getch();
    return 0;
}