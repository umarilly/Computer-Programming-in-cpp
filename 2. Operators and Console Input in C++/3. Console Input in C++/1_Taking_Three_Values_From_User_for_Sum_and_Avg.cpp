
#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int a, b, c;

    cout << "Enter the first value : ";
    cin >> a;
    cout << "Enter the first value : ";
    cin >> b;
    cout << "Enter the first value : ";
    cin >> c;
    

    int sum = a + b + c;

    double avg = static_cast<double>(sum) / 3;

    cout << "The Sum is : " << sum << endl;
    cout << "The Average is : " << avg << endl;

    _getch();
    return 0;
}
