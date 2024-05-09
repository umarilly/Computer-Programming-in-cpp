
#include<iostream>
#include<conio.h>

using namespace std;

/* No function Prototype, if function defination is above the main(), then there is no need of function Prototype */
void simpleFunction() {
	cout << "Press 1 for Output : " <<endl ;
	cout << "Press 2 for input : " << endl;
	cout << "Press 3 for process : " << endl;
}

int main() {

	simpleFunction();
	
	int operation;
	cout << "Enter from list : ";
	cin >> operation;

	switch (operation) {
        case 1: {
            cout << "Outputting ... " << endl;
            break;
        }
        case 2: {
            cout << "Inputting ... " << endl;
            break;
        }
        case 3: {
            cout << "Processing ... " << endl;
            break;
        }
        default: {
            cout << "please select from the list " << endl;
        }
	}

	_getch();
	return 0;
}
