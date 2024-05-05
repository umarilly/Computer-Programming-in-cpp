
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	const int size = 10;
	int abc[size];
	int first = 0, mid, last = 9;
	int num;

	cout << "Enter the Elements of the Array :- \n\n";
	for (int i = 0; i < size; i++) {
		cout << "The Element at index [" << i << "] is : ";
		cin >> abc[i];
	}
	cout << "\n";
	cout << "The Elements you entered in the Array are :- \n";
	for (int i = 0; i < size; i++) {
		cout << abc[i] << "  ";
	}
	cout << "\n\n";
	cout << "Entered the number you want to find in Array :- \n";
	cin >> num;

	while (first <= last) {
		mid = (first + last) / 2;

		if (num == abc[mid]) {
			cout << "\nThe Number is found at index number : " << mid << endl;
			break;
		}
		else if (num > abc[mid]) {
            first = (mid + 1);
        }
		else if (num < abc[mid]) {
            last = (mid - 1);
        }
	}

	if (num < abc[mid] || num > abc[mid]) {
		cout << "\nNumber not found " << endl;
	}

	_getch();
	return 0;
}
