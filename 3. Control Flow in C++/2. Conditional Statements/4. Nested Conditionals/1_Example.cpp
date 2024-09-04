#include<iostream> 
#include<conio.h>

using namespace std;

int main() {
    int a,b;
    cout << "Enter the marks of 1st student : ";
    cin >> a;
    cout << "Enter the marks of 2nd student : ";
    cin >> b;

    if (a >= 80) {
        if (b >= 60) {
            cout << "you got A";
        }
    }
    _getch();
    return 0;
}
