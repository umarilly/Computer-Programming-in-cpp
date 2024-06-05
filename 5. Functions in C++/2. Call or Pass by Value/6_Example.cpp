
#include<iostream>
#include<conio.h>

using namespace std;

void sum_avg (double i , double j ,double sum ,double avg) {
	sum = i + j;
	avg = sum / 2;
	cout << "The sum is : " << sum << endl;
	cout << "The avg is : " << avg << endl;
}

int main() {
	
    int a, b;
	int sum = 0, avg = 0;

	cout << "Enter two numbers :- \n";
	cin >> a >> b;

	sum_avg(a, b, sum, avg);

	_getch();
	return 0;
}
