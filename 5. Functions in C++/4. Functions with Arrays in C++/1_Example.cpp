
#include<iostream>
#include<conio.h>

using namespace std;

void display (int marks[5]) {
	cout << "The Elemets of the Array are :- \n";
	for (int i = 0; i < 5; i++)
		cout << marks[i] << endl;
}

int main() {
    
	int marks[5] = { 3,5,7,9,5 };
	display(marks);
	
	_getch();
	return 0;
}
