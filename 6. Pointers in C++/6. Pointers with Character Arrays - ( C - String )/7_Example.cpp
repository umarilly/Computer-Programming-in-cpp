#include <iostream>
#include <conio.h>

using namespace std;
const int size = 50;

int main() {

    char str[size];
    cout << "Please enter the string : ";
    cin.getline(str, size); 

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