#include<iostream> 
#include<conio.h>
using namespace std;

int main() {

    char ch = 'A';
    
    do {
        cout << ch << "  ";
        ch++;
    } 
    while (ch <= 'Z');


    _getch();
    return 0;
}
