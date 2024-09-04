#include <iostream>
#include <conio.h>


using namespace std;

int main () {

    int num;
    cout << "Please enter the number : ";
    cin >>  num;

    if ( num <= 10 ) {
        cout << "Number is greater\n";
    }

    cout << "This is outside of if statement";

    _getch();
    return 0;
}