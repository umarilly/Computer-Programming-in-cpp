

// Average of class marks using While Loop

#include<iostream> 
#include<conio.h>

using namespace std;

int main()
{
    int a = 1, v = 0, avg, marks;

    while (a <= 10) {
            cout << "Marks of student " << a << " is : ";
            cin >> marks;
            a++;
            v = v + marks;
        }

    avg = v / 10;

    cout << "Class average is : " << avg;

    _getch();
    return 0;
}
