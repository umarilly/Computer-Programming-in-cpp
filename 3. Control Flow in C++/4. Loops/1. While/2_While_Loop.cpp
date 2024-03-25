
#include<iostream> 
#include<conio.h>
using namespace std;
int main() {

    int a;
    cout << "Enter the number : ";
    cin >> a;

    while (a <= 6) {
        cout << "Answer is " << a * a << "\n";
        a++;
    }

    _getch();
    return 0;
}
