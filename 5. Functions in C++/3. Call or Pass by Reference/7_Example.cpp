#include<iostream>
#include<conio.h>

using namespace std;

void swap(int& num_1, int& num_2) {
    int temp = num_1;
    num_1 = num_2;
    num_2 = temp;
}

int main() {

    int first, second, third;

    cout << "Enter three integers :- \n";
    cin >> first >> second >> third;
    
    if (first < second) {
        swap(first, second);
    }
    if (second < third) {
        swap(second, third);
    }
    if (first < second) {
        swap(first, second);
    }
    
    cout << "The Sorted integers in descending order are : " << first << " , " << second << " , " << third << endl;

    _getch();
    return 0;
}
