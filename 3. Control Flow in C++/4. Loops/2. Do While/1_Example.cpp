
/*
    Program in C++ to print alphabets from A to Z using do-while loop.
*/

#include<iostream> 
#include<conio.h>

using namespace std;

int main() {

    char character = 'A';
    
    do {
        // This block will be executed until the value of character is less than or equal to 'Z'.
        cout << character << " ";
        character++;
    }  while (character <= 'Z');

    _getch();
    return 0;
}