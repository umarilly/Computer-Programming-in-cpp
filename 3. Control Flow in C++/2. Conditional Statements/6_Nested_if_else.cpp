#include <iostream>

using namespace std;

int main() {

    int x = 10;
    int y = 20;

    if (x == 10) {
        cout << "x is 10" << endl;
        if (y == 20) {
            cout << "y is 20" << endl;
        } else {
            cout << "y is not 20." << endl;
        }
    } else {
        cout << "x is not 10." << endl;
    }

    return 0;
}
