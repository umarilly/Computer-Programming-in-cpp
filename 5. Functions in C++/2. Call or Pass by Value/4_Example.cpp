
#include<iostream>
#include<conio.h>

using namespace std;

int sum(int num_1, int num_2) {
	int num_3 = num_1 + num_2;
	return num_3;
}

int main() {
    
	int var_x, var_y, var_z;

	var_x = 3; var_y = 5;
	var_z = sum(var_x, var_y);
	cout << var_z << endl;

	_getch();
	return 0;
}

