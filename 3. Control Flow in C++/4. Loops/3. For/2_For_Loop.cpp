#include <iostream>

using namespace std;
int main()
{
    int a, b;

    for (a = 1, b = 10; a <= 10, b >= 1; a++, b--) {
        cout << "a=" << a << "\tb=" << b << endl;
    }


    return 0;
}
