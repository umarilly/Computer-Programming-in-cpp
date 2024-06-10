#include <iostream>
#include <conio.h>

using namespace std;

void sum_avg(double i, double j, double &sum, double &avg) {
    sum = i + j;
    avg = sum / 2;
}

int main() {
    
    double x, y, sum, avg;
    cout << "Enter two numbers :- \n";
    cin >> x >> y;

    sum_avg(x, y, sum, avg);

    cout << "The sum is : " << sum << endl;
    cout << "The avg is : " << avg << endl;

    _getch();
    return 0;
}
