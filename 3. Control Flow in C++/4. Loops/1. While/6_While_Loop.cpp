#include<iostream> 
#include<conio.h>

using namespace std;

int main() {

    int no_times;
    cout << "How many times do you want to say ? ";
    cin >> no_times;

    while (no_times != 0) {
        cout << "Hello!" << endl;
        no_times--;
    }

    cout << "End!!" << endl;

    _getch();
    return 0;
}
