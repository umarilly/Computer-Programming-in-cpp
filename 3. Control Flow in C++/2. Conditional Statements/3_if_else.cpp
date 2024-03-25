#include <iostream>
#include <conio.h>


using namespace std;

int main () {

    int num;
    cout << "Please enter the number : ";
    cin >>  num;

    if ( num <= 10 ) {
        cout << "Number is greater\n";
    } else {
        cout << "Number is smaller";
    }

    _getch();
    return 0;
}