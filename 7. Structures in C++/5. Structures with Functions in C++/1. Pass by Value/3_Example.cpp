
#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

struct Rectangle {
	int length;
	int width;
};

void display(Rectangle p) {
	cout << "\n" << endl;
	cout << " ===> The length of Rectangle Is : " << p.length << endl;
	cout << " ===> The width of Rectangle Is : " << p.width << endl;
}

int main()
{
	Rectangle p;
	cout << endl;
	cout << " Enter length : ";
	cin >> p.length;
	cout << " Enter wdith : ";
	cin >> p.width;
    
	display(p);

	_getch();
	return 0;
}