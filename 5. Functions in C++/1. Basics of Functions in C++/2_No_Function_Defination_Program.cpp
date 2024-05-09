
#include<iostream>
#include<conio.h>

using namespace std;

/* No function defination, if function defination is above the main(), then there is no need of function defination */
void abc() {
	cout << "Press 1 for Output : " <<endl ;
	cout << "Press 2 for input : " << endl;
	cout << "Press 3 for process : " << endl;
}

int main() {

	abc();
	
	int op;
	cout << "Enter from list : ";
	cin >> op;

	switch (op) {
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
            cout << "please select from list " << endl;
        }
	}

	_getch();
	return 0;
}
