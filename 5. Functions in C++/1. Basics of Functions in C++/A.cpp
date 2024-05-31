#include<iostream>
#include<conio.h>

using namespace std;

int max(int, int, int);
int min(int, int, int);

int main() {

	int first_person, second_person, third_person;

	cout << "Enter the age of first person : ";
	cin >> first_person;
	cout << "Enter the age of second person : ";
	cin >> second_person;
	cout << "Enter the age of third person : ";
	cin >> third_person;
	cout << endl;
	
	int maximum = max(first_person, second_person, third_person);
	cout << "The Oldest is : " << maximum << endl;
	
	int minimum = min(first_person, second_person, third_person);
	cout << "The Youngest is : " << minimum << endl;

	_getch();
	return 0;
}

int max(int x, int y, int z) {

    if ( x > y && x > z ) {
        return x;
    }
    else if ( y > x && y > z ) {
        return y;
    }
    else {
        return z;
    }
}

int min(int x, int y, int z) {

    if ( x < y && x < z ) {
        return x;
    }
    else if ( y < x && y < z ) {
        return y;
    }
    else {
        return z;
    }

}
