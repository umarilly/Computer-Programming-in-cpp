
#include<iostream>
#include<conio.h>

using namespace std;

void PrintSumAve(double no1, double no2) {

	double sum, average;
	sum = no1 + no2;
	average = sum / 2;
	cout << "The sum is : " << sum << endl;
	cout << "The average is : " << average << endl;
}

int main() {
    
	double x, y;
	cout << "Enter two numbers :- \n";
	cin >> x >> y;
	
	PrintSumAve(x, y);
	
	_getch();
	return 0;
}
