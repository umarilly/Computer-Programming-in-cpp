
/*
    Program in C++ to demonstrate the use of the while loop.
*/

#include<iostream> 
#include<conio.h> 

using namespace std;

int main() {
    
    int x = 1;
    while (x != 12)  {
        // This block will be executed until the value of x is not equal to 12.
            cout << "Value of x is : " << x << endl;
            x = x + 1; // Same as x+=1 or x++
        }

    _getch();
    return 0;
}