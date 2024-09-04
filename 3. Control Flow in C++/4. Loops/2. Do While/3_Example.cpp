
/*
    Progra in C++ to demonstrate the use of the do-while loop.
*/

#include<iostream> 
#include<conio.h>

using namespace std;

int main() {

    char answer;
    
    do {
        // This block will be executed until the value of answer is not equal to 'y' or 'Y'.
        cout << "Would you help me : ";
        cin >> answer;
    } while (answer != 'y' && answer != 'Y'); // Repeat the above block until the value of answer is not equal to 'y' or 'Y'.
    
    cout << "Great"; // Print "Great" after the loop ends.

    _getch();
    return 0;
}