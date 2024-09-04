
/*
    Program in C++ to demonstrate the use of the while loop.
*/

#include<iostream> 
#include<conio.h>

using namespace std;

int main() {

    int no_times;
    cout << "How many times do you want to say ? ";
    cin >> no_times;

    while (no_times != 0) {
        // This block will be executed until the value of no_times is not equal to 0.
        cout << "Hello!" << endl;
        no_times--;
    }

    cout << "End!!" << endl; // This block will always be executed.

    _getch();
    return 0;
}