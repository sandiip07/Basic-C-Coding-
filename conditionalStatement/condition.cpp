using namespace std;
#include <iostream>

int main()
{
    int a = 12;
    int b = 3; 
    int c = 14; 

    if ((a > b) && (a > c))
    {
        cout << "a is greatest" << endl;
    }
    else
    if((b > a) && (b > c))
    {
        cout << "B is greatest " << endl;
    }
    else
    {
        cout << "C is greatest" << endl;
    }
}