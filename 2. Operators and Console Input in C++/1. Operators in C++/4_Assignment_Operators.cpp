
#include <iostream>

using namespace std;

int main() {

    int a = 10; // (=) , Means assigning the value 10 from right side to a which is on left side

    a += 5; // equivalent to a = a + 5
    cout << "a: " << a << endl;

    a -= 2; // equivalent to a = a - 2
    cout << "a: " << a << endl;

    a *= 3; // equivalent to a = a * 3
    cout << "a: " << a << endl;

    a /= 2; // equivalent to a = a / 2
    cout << "a: " << a << endl;

    a %= 3; // equivalent to a = a % 3
    cout << "a: " << a << endl;

    return 0;
}
