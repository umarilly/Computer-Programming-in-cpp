
// Example to explain the pointer to pointer with functions

#include <iostream>
#include <conio.h>

using namespace std;

void modifyValue(int** ptrToPtr) {
    **ptrToPtr = 20;
}

int main() {
    int value = 10; 
    int* ptr = &value; 
    int** ptrToPtr = &ptr; 

    cout << "The Original value is : " << value << endl; 

    modifyValue(ptrToPtr);

    cout << "The Modified value is : " << value << endl; 

    _getch();
    return 0;
}