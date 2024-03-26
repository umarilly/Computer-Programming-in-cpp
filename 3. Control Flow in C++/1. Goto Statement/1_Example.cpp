
#include <iostream>

using namespace std;

int main() {

    int i = 0;

loop: // This is the label

    cout << i << " ";

    i++;
    
    if (i < 5)
        goto loop;

    return 0;
}
