
#include <iostream>

using namespace std;

int main() {

    bool a = true, b = false;

    cout << "a && b: " << (a && b) << endl; // false

    cout << "a || b: " << (a || b) << endl; // true

    cout << "!a: " << !a << endl;           // false
    
    cout << "!b: " << !b << endl;           // true

    return 0;
}
