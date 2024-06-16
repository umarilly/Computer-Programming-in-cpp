
#include<iostream>
#include<conio.h>

using namespace std;

void display (int marks[], int size) {
	cout << "The Elemets of the Array are :- \n";
	for (int i = 0; i < size; i++)
		cout << marks[i] << endl;
}

int main() {

	int marks[] = { 3,5,7,9,5 };
    int size = sizeof(marks)/sizeof(marks[0]);
	display(marks,size);
	
	_getch();
	return 0;
}
