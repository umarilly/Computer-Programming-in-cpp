
#include <iostream>

using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks;
};

int main() {

    Student students[3] = {
        {"Alice", 101, 85.5},
        {"Bob", 102, 90.0},
        {"Charlie", 103, 78.0}
    };

    for (int i = 0; i < 3; i++) {
        cout << "Student Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].rollNumber << endl;
        cout << "Marks: " << students[i].marks << endl;
        cout << endl; 
    }

    return 0;
}