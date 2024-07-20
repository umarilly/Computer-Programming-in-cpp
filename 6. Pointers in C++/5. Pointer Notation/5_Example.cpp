
// Sorting of Three Numbers using Pointers

#include <iostream>
#include <conio.h>

using namespace std;

// Function to order three numbers using pointers
void sorting(int* numb1, int* numb2, int* numb3) {
    // Swap values if the first number is greater than the second
    if (*numb1 > *numb2) {
        int temp = *numb1;
        *numb1 = *numb2;
        *numb2 = temp;
    }
    // Swap values if the second number is greater than the third
    if (*numb2 > *numb3) {
        int temp = *numb2;
        *numb2 = *numb3;
        *numb3 = temp;
    }
    // Swap values again if the first number is greater than the second
    if (*numb1 > *numb2) {
        int temp = *numb1;
        *numb1 = *numb2;
        *numb2 = temp;
    }
}

int main() {
    int n1, n2, n3;

    // Input three numbers
    cout << "Enter Number 1 : ";
    cin >> n1;
    int* ptr1 = &n1;
    cout << "Enter Number 2 : ";
    cin >> n2;
    int* ptr2 = &n2;
    cout << "Enter Number 3 : ";
    cin >> n3;
    int* ptr3 = &n3;

    // Display numbers before sorting
    cout << "\nBefore Sorting :- \n";
    cout << "Number 1 is : " << n1 << endl;
    cout << "Number 2 is : " << n2 << endl;
    cout << "Number 3 is : " << n3 << endl;

    // Sort the numbers using the order function
    sorting(ptr1, ptr2, ptr3);

    // Display numbers after sorting
    cout << "\nAfter Sorting :- \n";
    cout << "Number 1 is : " << n1 << endl;
    cout << "Number 2 is : " << n2 << endl;
    cout << "Number 3 is : " << n3 << endl;

    _getch();
    return 0;
}