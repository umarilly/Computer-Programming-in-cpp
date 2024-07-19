
#include<iostream>
#include<conio.h>

using namespace std;

void order(int* numb1, int* numb2)  {
	if (*numb1 > * numb2)  {
		 int temp = *numb1;
		* numb1 = *numb2;
		* numb2 = temp;
	}	
}

int main() {
    
	int n1 = 99, n2 = 11; 
	int n3 = 22, n4 = 88;
	
	order(&n1, &n2); 

	cout << "n1 = " << n1 << endl; 
	cout << "n2 = " << n2 << endl;

	order(&n3, &n4);

	cout << "\nn3 = " << n3 << endl;
	cout << "n4 = " << n4 << endl;

	_getch();
	return 0;
}
