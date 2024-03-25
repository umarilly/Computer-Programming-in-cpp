#include<iostream> 
#include<conio.h>

using namespace std;

int main()  {

    int a;
    cout << "Enter the marks of student : ";
    cin >> a;

    if (a >= 90) {
        cout << "you got A+";
    }
    else if (a >= 80) {
        cout << "you got A";
    }
    else if (a >= 70) {
        cout << "you got B";
    }
    else if (a >= 60) {
        cout << "you got C";
    }
    else {
        cout << "you Aare fail";
    }
    
    _getch();
    return 0;
}

