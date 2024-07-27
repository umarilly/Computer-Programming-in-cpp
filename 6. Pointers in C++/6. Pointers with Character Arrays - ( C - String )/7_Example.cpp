#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    char str[] = "Pointer Arithmetic Example";  
    char* ptr = str; 
    int vowelCount = 0;  

    while (*ptr != '\0') {
        if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' ||
            *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {
            vowelCount++;  
        }
        ptr++; 
    }

    cout << "The number of vowels in the string is: " << vowelCount << endl;  

    _getch();
    return 0;
}