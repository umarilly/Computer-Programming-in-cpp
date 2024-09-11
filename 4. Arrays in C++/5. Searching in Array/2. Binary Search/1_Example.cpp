
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	const int size = 10;
	int abc[size];
	int first = 0, mid, last = 9;
	int number;

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
	cin >> number;

	while (first <= last) {
		mid = (first + last) / 2;

		if (number == abc[mid]) {
			cout << "\nThe Number is found at index number : " << mid << endl;
			break;
		}
		else if (number > abc[mid]) {
            first = (mid + 1);
        }
		else if (number < abc[mid]) {
            last = (mid - 1);
        }
	}

	if (number < abc[mid] || number > abc[mid]) {
		cout << "\nNumber not found " << endl;
	}

	_getch();
	return 0;
}
