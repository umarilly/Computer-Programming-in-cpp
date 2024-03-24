
#include <iostream>

using namespace std;

int main() {

    // Newline
    cout << "Hello, World!\n";

    // Tab
    cout << "Name:\tJohn\n";

    // Backspace
    cout << "123\b45\n";  // Outputs: 1245

    // Backslash
    cout << "\\n is a newline character\n";

    // Single quote
    cout << "It\'s a beautiful day\n";

    // Double quote
    cout << "She said, \"Hello!\"\n";

    // Null character
    char str[] = "He\0lloWorld";   // Forget about this for now, we will discuss it later 
    cout << "String with null character: " << str << endl;

    return 0;
}
