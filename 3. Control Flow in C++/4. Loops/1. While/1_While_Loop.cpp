#include<iostream> 

using namespace std;
int main()
{
    int x = 1;
    while (x != 12) 
        {
            cout << "Value of x is : " << x << endl;
            x = x + 1; // Same as x+=1 or x++
        }

    return 0;
}
