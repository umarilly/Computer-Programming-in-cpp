
// Sorting of Three Numbers using Pointers

#include<iostream>
#include<conio.h>

using namespace std;

void order(int* numb1, int* numb2, int* numb3) {
	int temp = *numb1;
	*numb1 = *numb2;
	*numb2 = * numb3;
	*numb3 = temp;		
}

int main() {
	int n1, n2, n3;

	cout << "Enter Number 1 : ";
	cin >> n1;
	cout << "Enter Number 2 : ";
	cin >> n2;
	cout << "Enter Number 3 : ";
	cin >> n3;
	
	cout << "\nBefore Sorting :- \n";
	cout << "Number 1 is = " << n1 << endl; 
	cout << "Number 2 is = " << n2 << endl;
	cout << "Number 3 is = " << n3 << endl;

	order(&n1, &n2, &n3);

	cout << "\nAfter Sorting :- \n";
	cout << "Number 1 is = " << n1 << endl;
	cout << "Number 2 is = " << n2 << endl;
	cout << "Number 3 is = " << n3 << endl;

	_getch();
	return 0;
}